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

            // ����������� DataGridView
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
                Title = "�������",
                InitialDirectory = Path.GetFullPath(path),
                Filter = "��������� ����� (*.txt)|*.txt|XML ����� (*.xml)|*.xml",
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
                Title = "���������",
                InitialDirectory = Path.GetFullPath(path),
                Filter = "��������� ����� (*.txt)|*.txt|XML ����� (*.xml)|*.xml",
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
                        // ����� ������ ��� ���������� ������ � ����
                        manager.SaveZiminProducts(filename);
                        MessageBox.Show($"���� ������� ��������!", "����������", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show($"������ ��� ����������: {ex.Message}", "������", MessageBoxButtons.OK, MessageBoxIcon.Error);
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
                MessageBox.Show($"���� ������� ��������!", "����������", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            catch (Exception ex)
            {
                MessageBox.Show($"������ ��� ��������: {ex.Message}", "������", MessageBoxButtons.OK);
            }
        }

        private void PopulateGrid()
        {
            dataGridViewProducts.Rows.Clear();
            dataGridViewProducts.Columns.Clear();

            if (manager.Products.Count == 0)
                return;

            ViewData();
            // ��������� ��������� �������
            dataGridViewProducts.Columns.Add("Name", "��������");
            dataGridViewProducts.Columns.Add("Manufacturer", "�������������");
            dataGridViewProducts.Columns.Add("Price", "����");
            dataGridViewProducts.Columns.Add("DeviceType", "��� ����������");
            dataGridViewProducts.Columns.Add("HasBattery", "������� �������");
            dataGridViewProducts.Columns.Add("Weight", "���");

            // ��������� ������� �������
            foreach (var product in manager.Products)
            {
                var parameters = product.GetParameters();
                // ���������, ��� � Electronics ������������ ������ ����������
                if (product is Electronics)
                {
                    dataGridViewProducts.Rows.Add(parameters[0], parameters[1], parameters[2], parameters[3], parameters[4], parameters[5]);
                }
                else
                {
                    // ���� ������� �������� ���� ZiminProduct, ��������� �������������� ���� �������
                    dataGridViewProducts.Rows.Add(parameters[0], parameters[1], parameters[2], "-", "-", "-");
                }
            }
        }

        private void ClearToolStripMenuItem_Click(object sender, EventArgs e)
        {
            manager.ClearZiminProducts();
            PopulateGrid();
            MessageBox.Show($"������ �������!", "����������", MessageBoxButtons.OK, MessageBoxIcon.Information);
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
