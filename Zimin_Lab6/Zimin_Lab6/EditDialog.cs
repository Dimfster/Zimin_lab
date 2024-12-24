using System;
using System.Windows.Forms;

namespace Zimin_Lab6
{
    public partial class EditDialog : Form
    {
        public ZiminManager manager;
        public EditDialog(ZiminManager manager)
        {
            InitializeComponent();
            this.manager = manager;
            listProducts.DataSource = GetProductList();
        }

        public List<string> GetProductList()
        {
            var list = new List<string>();
            foreach (ZiminProduct product in manager.Products)
            {
                list.Add(product.Name);
            }
            return list;
        }

        public void SetFields(bool ans, bool mainstr = true)
        {
            labelCategory.Visible = ans;
            textBoxCategory.Visible = ans;
            labelWeight.Visible = ans;
            textBoxWeight.Visible = ans;
            labelBattery.Visible = ans;
            checkHasBattery.Visible = ans;

            labelName.Visible = mainstr;
            textBoxName.Visible = mainstr;
            labelManufactorer.Visible = mainstr;
            textBoxManufactorer.Visible = mainstr;
            labelPrice.Visible = mainstr;
            textBoxPrice.Visible = mainstr;
        }

        private void buttonAddProduct_Click(object sender, EventArgs e)
        {
            ZiminProduct product = new();
            EditProductDialog dialog = new EditProductDialog(product, edit: false);
            if (dialog.ShowDialog() == DialogResult.OK)
            {
                manager.Products.Add(dialog.product);
                listProducts.DataSource = GetProductList();
                listProducts.SelectedIndex = manager.Products.Count - 1;
            }
        }

        private void buttonEditProduct_Click(object sender, EventArgs e)
        {
            if (manager.Products.Count == 0)
            {
                return;
            }
            ZiminProduct product = manager.Products[listProducts.SelectedIndex];
            int index = listProducts.SelectedIndex;
            EditProductDialog dialog = new EditProductDialog(product);
            try
            {
                if (dialog.ShowDialog() == DialogResult.OK)
                {
                    manager.Products[listProducts.SelectedIndex] = dialog.product;
                }
                listProducts.DataSource = GetProductList();
                listProducts.SelectedIndex = index;
            }
            catch (Exception ex)
            {
                MessageBox.Show($"ошибка {ex.Message}");
            }
        }

        public void CheckList()
        {
            if (manager.Products.Count == 0)
            {
                SetFields(false, false);
            }
            else
            {
                SetFields(true, true);
            }
        }

        private void buttonDelete_Click(object sender, EventArgs e)
        {
            int currentRow = listProducts.SelectedIndex;
            if (currentRow < 0){ return; }
            int nextRow = currentRow == manager.Products.Count - 1 ? currentRow - 1 : currentRow;
            manager.DeleteProduct(currentRow);
            listProducts.DataSource = GetProductList();
            listProducts.SelectedIndex = nextRow;
            CheckList();
        }

        private void listProducts_SelectedIndexChanged(object sender, EventArgs e)
        {
            int idx = listProducts.SelectedIndex;
            ZiminProduct product = manager.Products[idx];

            textBoxName.Text = product.Name;
            textBoxManufactorer.Text = product.Manufacturer;
            textBoxPrice.Text = product.Price.ToString();

            if (product is Electronics electronics)
            {
                SetFields(true);
                textBoxCategory.Text = electronics.DeviceType;
                textBoxWeight.Text = electronics.Price.ToString();
                checkHasBattery.Checked = electronics.HasBattery;
            }
            else
            {
                SetFields(false);
            }
        }

        private void buttonCancel_Click(object sender, EventArgs e)
        {
            DialogResult = DialogResult.Cancel;
            Close();
        }

        private void buttonOk_Click(object sender, EventArgs e)
        {
            DialogResult = DialogResult.OK;
            Close();
        }
    }
}
