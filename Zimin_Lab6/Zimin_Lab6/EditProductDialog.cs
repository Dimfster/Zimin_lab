using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace Zimin_Lab6
{
    public partial class EditProductDialog : Form
    {
        private bool edit { get; set; }
        public ZiminProduct product { get; set; }
        public EditProductDialog(ZiminProduct product, bool edit = true)
        {
            InitializeComponent();
            this.product = product;
            this.edit = edit;
            FillFields();
        }

        public void FillFields() 
        {
            SetFields(false);
            textBoxName.Text = product.Name;
            textBoxManufactorer.Text = product.Manufacturer;
            textBoxPrice.Text = product.Price.ToString();
            if (!edit && checkElectronics.Checked)
            {
                product = new Electronics(product);
            }
            if (product is Electronics electronics)
            {
                SetFields(true);
                checkElectronics.Checked = true;
                textBoxCategory.Text = electronics.DeviceType ;
                textBoxWeight.Text = electronics.Weight.ToString("F2");
                checkHasBattery.Checked = electronics.HasBattery;
            }

            if (edit)
            {
                checkElectronics.Enabled = false;
            }
        }

        public void SetFields(bool ans)
        {
            labelCategory.Visible = ans;
            textBoxCategory.Visible = ans;
            labelWeight.Visible = ans;
            textBoxWeight.Visible = ans;
            labelBattery.Visible = ans;
            checkHasBattery.Visible = ans;
        }
        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {
            SetFields(checkElectronics.Checked);
        }

        private void buttonOk_Click(object sender, EventArgs e)
        {
            product.Name = textBoxName.Text;
            product.Manufacturer = textBoxManufactorer.Text;
            product.Price = int.Parse(textBoxPrice.Text);
            if (!edit && checkElectronics.Checked)
            {
                product = new Electronics(product);
            }
            if (product is Electronics electronics)
            {
                electronics.DeviceType = textBoxCategory.Text;
                electronics.Weight = double.Parse(textBoxWeight.Text);
                electronics.HasBattery = checkHasBattery.Checked;
            }

            DialogResult = DialogResult.OK;
            Close();
        }

        private void buttonCancel_Click(object sender, EventArgs e)
        {
            DialogResult = DialogResult.Cancel;
            this.Close();
        }
    }
}
