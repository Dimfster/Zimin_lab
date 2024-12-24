using System;
using System.Collections.Generic;
using System.IO;
using System.Windows.Forms;

namespace Zimin_Lab6
{
    public partial class Form1 : Form
    {
        public ZiminManager manager;

        public Form1()
        {
            InitializeComponent();
            this.manager = new ZiminManager();

            // Настраиваем DataGridView
            dataGridViewProducts.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            dataGridViewProducts.AllowUserToAddRows = false;
            dataGridViewProducts.ReadOnly = true;
            ViewData();
        }
        public void ViewData()
        {
            if (manager.Products.Count == 0)
            {
                dataGridViewProducts.Visible = false;
            }
            else
            {
                dataGridViewProducts.Visible = true;
            }
        }

        private void OpenFileToolStripMenuItem_Click(object sender, EventArgs e)
        {
            string path = Path.Combine(Directory.GetCurrentDirectory(), @"..\..\..\Saves");

            OpenFileDialog openFileDialog = new OpenFileDialog
            {
                Title = "Открыть",
                InitialDirectory = Path.GetFullPath(path),
                Filter = "Текстовые файлы (*.txt)|*.txt|XML файлы (*.xml)|*.xml",
                FilterIndex = 1,
                RestoreDirectory = true
            };

            if (openFileDialog.ShowDialog() == DialogResult.OK)
            {
                string filename = openFileDialog.FileName;

                if (!string.IsNullOrEmpty(filename))
                {
                    LoadFileToGrid(filename);
                }
            }
        }
        private void SaveFileToolStripMenuItem_Click(object sender, EventArgs e)
        {
            string path = Path.Combine(Directory.GetCurrentDirectory(), @"..\..\..\Saves");

            SaveFileDialog saveFileDialog = new SaveFileDialog
            {
                Title = "Сохранить",
                InitialDirectory = Path.GetFullPath(path),
                Filter = "Текстовые файлы (*.txt)|*.txt|XML файлы (*.xml)|*.xml",
                FilterIndex = 1,
                RestoreDirectory = true
            };

            if (saveFileDialog.ShowDialog() == DialogResult.OK)
            {
                string filename = saveFileDialog.FileName;

                if (!string.IsNullOrEmpty(filename))
                {
                    try
                    {
                        // Вызов метода для сохранения данных в файл
                        manager.SaveZiminProducts(filename);
                        MessageBox.Show($"Файл успешно сохранен!", "Информация", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show($"Ошибка при сохранении: {ex.Message}", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                }
            }
        }
        private void LoadFileToGrid(string filename)
        {
            try
            {
                manager.LoadZiminProducts(filename);
                PopulateGrid();
                MessageBox.Show($"Файл успешно загружен!", "Информация", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Ошибка при загрузке: {ex.Message}", "Ошибка", MessageBoxButtons.OK);
            }
        }

        private void PopulateGrid()
        {
            dataGridViewProducts.Rows.Clear();
            dataGridViewProducts.Columns.Clear();

            if (manager.Products.Count == 0)
                return;

            ViewData();
            // Формируем заголовки таблицы
            dataGridViewProducts.Columns.Add("Name", "Название");
            dataGridViewProducts.Columns.Add("Manufacturer", "Производитель");
            dataGridViewProducts.Columns.Add("Price", "Цена");
            dataGridViewProducts.Columns.Add("DeviceType", "Тип устройства");
            dataGridViewProducts.Columns.Add("HasBattery", "Наличие батареи");
            dataGridViewProducts.Columns.Add("Weight", "Вес");

            // Заполняем таблицу данными
            foreach (var product in manager.Products)
            {
                var parameters = product.GetParameters();
                // Учитываем, что в Electronics возвращается больше параметров
                if (product is Electronics)
                {
                    dataGridViewProducts.Rows.Add(parameters[0], parameters[1], parameters[2], parameters[3], parameters[4], parameters[5]);
                }
                else
                {
                    // Если продукт базового типа ZiminProduct, оставляем дополнительные поля пустыми
                    dataGridViewProducts.Rows.Add(parameters[0], parameters[1], parameters[2], "-", "-", "-");
                }
            }
        }

        private void ClearToolStripMenuItem_Click(object sender, EventArgs e)
        {
            manager.ClearZiminProducts();
            PopulateGrid();
            MessageBox.Show($"Товары очищены!", "Информация", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void EditToolStripMenuItem_Click(object sender, EventArgs e)
        {
            EditDialog editDialog = new EditDialog(manager);
            if (editDialog.ShowDialog() == DialogResult.OK)
            {
                manager = editDialog.manager;
                PopulateGrid();
            }
        }


    }
}
