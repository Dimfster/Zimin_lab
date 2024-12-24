namespace Zimin_Lab6
{
    partial class EditDialog
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            buttonCancel = new Button();
            buttonOk = new Button();
            labelBattery = new Label();
            checkHasBattery = new CheckBox();
            labelWeight = new Label();
            textBoxWeight = new TextBox();
            labelPrice = new Label();
            textBoxPrice = new TextBox();
            labelCategory = new Label();
            textBoxCategory = new TextBox();
            labelName = new Label();
            textBoxName = new TextBox();
            labelManufactorer = new Label();
            textBoxManufactorer = new TextBox();
            flowLayoutPanel3 = new FlowLayoutPanel();
            buttonAddProduct = new Button();
            buttonDelete = new Button();
            buttonEditProduct = new Button();
            flowLayoutPanel2 = new FlowLayoutPanel();
            listProducts = new ListBox();
            flowLayoutPanel3.SuspendLayout();
            flowLayoutPanel2.SuspendLayout();
            SuspendLayout();
            // 
            // buttonCancel
            // 
            buttonCancel.Location = new Point(567, 425);
            buttonCancel.Name = "buttonCancel";
            buttonCancel.Size = new Size(94, 29);
            buttonCancel.TabIndex = 41;
            buttonCancel.Text = "Отмена";
            buttonCancel.UseVisualStyleBackColor = true;
            buttonCancel.Click += buttonCancel_Click;
            // 
            // buttonOk
            // 
            buttonOk.Location = new Point(459, 425);
            buttonOk.Name = "buttonOk";
            buttonOk.Size = new Size(94, 29);
            buttonOk.TabIndex = 40;
            buttonOk.Text = "Ок";
            buttonOk.UseVisualStyleBackColor = true;
            buttonOk.Click += buttonOk_Click;
            // 
            // labelBattery
            // 
            labelBattery.AutoSize = true;
            labelBattery.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelBattery.Location = new Point(349, 349);
            labelBattery.Name = "labelBattery";
            labelBattery.Size = new Size(98, 25);
            labelBattery.TabIndex = 39;
            labelBattery.Text = "Батарея";
            // 
            // checkHasBattery
            // 
            checkHasBattery.AutoSize = true;
            checkHasBattery.Enabled = false;
            checkHasBattery.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            checkHasBattery.Location = new Point(563, 348);
            checkHasBattery.Name = "checkHasBattery";
            checkHasBattery.Size = new Size(83, 29);
            checkHasBattery.TabIndex = 38;
            checkHasBattery.Text = "Есть";
            checkHasBattery.UseVisualStyleBackColor = true;
            // 
            // labelWeight
            // 
            labelWeight.AutoSize = true;
            labelWeight.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelWeight.Location = new Point(466, 270);
            labelWeight.Name = "labelWeight";
            labelWeight.Size = new Size(50, 25);
            labelWeight.TabIndex = 37;
            labelWeight.Text = "Вес";
            // 
            // textBoxWeight
            // 
            textBoxWeight.Location = new Point(335, 298);
            textBoxWeight.Name = "textBoxWeight";
            textBoxWeight.ReadOnly = true;
            textBoxWeight.Size = new Size(326, 27);
            textBoxWeight.TabIndex = 36;
            textBoxWeight.TextAlign = HorizontalAlignment.Center;
            // 
            // labelPrice
            // 
            labelPrice.AutoSize = true;
            labelPrice.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelPrice.Location = new Point(459, 154);
            labelPrice.Name = "labelPrice";
            labelPrice.RightToLeft = RightToLeft.Yes;
            labelPrice.Size = new Size(66, 25);
            labelPrice.TabIndex = 32;
            labelPrice.Text = "Цена";
            labelPrice.TextAlign = ContentAlignment.TopCenter;
            // 
            // textBoxPrice
            // 
            textBoxPrice.Location = new Point(335, 182);
            textBoxPrice.Name = "textBoxPrice";
            textBoxPrice.ReadOnly = true;
            textBoxPrice.Size = new Size(326, 27);
            textBoxPrice.TabIndex = 35;
            textBoxPrice.TextAlign = HorizontalAlignment.Center;
            // 
            // labelCategory
            // 
            labelCategory.AutoSize = true;
            labelCategory.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelCategory.Location = new Point(432, 212);
            labelCategory.Name = "labelCategory";
            labelCategory.Size = new Size(121, 25);
            labelCategory.TabIndex = 34;
            labelCategory.Text = "Категория";
            // 
            // textBoxCategory
            // 
            textBoxCategory.Location = new Point(335, 240);
            textBoxCategory.Name = "textBoxCategory";
            textBoxCategory.ReadOnly = true;
            textBoxCategory.Size = new Size(326, 27);
            textBoxCategory.TabIndex = 33;
            textBoxCategory.TextAlign = HorizontalAlignment.Center;
            // 
            // labelName
            // 
            labelName.AutoSize = true;
            labelName.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelName.Location = new Point(441, 38);
            labelName.Name = "labelName";
            labelName.RightToLeft = RightToLeft.Yes;
            labelName.Size = new Size(112, 25);
            labelName.TabIndex = 28;
            labelName.Text = "Название";
            labelName.TextAlign = ContentAlignment.TopCenter;
            // 
            // textBoxName
            // 
            textBoxName.Location = new Point(335, 66);
            textBoxName.Name = "textBoxName";
            textBoxName.ReadOnly = true;
            textBoxName.Size = new Size(326, 27);
            textBoxName.TabIndex = 31;
            textBoxName.TextAlign = HorizontalAlignment.Center;
            // 
            // labelManufactorer
            // 
            labelManufactorer.AutoSize = true;
            labelManufactorer.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelManufactorer.Location = new Point(407, 96);
            labelManufactorer.Name = "labelManufactorer";
            labelManufactorer.Size = new Size(172, 25);
            labelManufactorer.TabIndex = 30;
            labelManufactorer.Text = "Производитель";
            // 
            // textBoxManufactorer
            // 
            textBoxManufactorer.Location = new Point(335, 124);
            textBoxManufactorer.Name = "textBoxManufactorer";
            textBoxManufactorer.ReadOnly = true;
            textBoxManufactorer.Size = new Size(326, 27);
            textBoxManufactorer.TabIndex = 29;
            textBoxManufactorer.TextAlign = HorizontalAlignment.Center;
            // 
            // flowLayoutPanel3
            // 
            flowLayoutPanel3.Controls.Add(buttonAddProduct);
            flowLayoutPanel3.Controls.Add(buttonDelete);
            flowLayoutPanel3.Controls.Add(buttonEditProduct);
            flowLayoutPanel3.Dock = DockStyle.Top;
            flowLayoutPanel3.Location = new Point(0, 0);
            flowLayoutPanel3.Name = "flowLayoutPanel3";
            flowLayoutPanel3.Size = new Size(678, 35);
            flowLayoutPanel3.TabIndex = 27;
            // 
            // buttonAddProduct
            // 
            buttonAddProduct.Font = new Font("Times New Roman", 10.2F, FontStyle.Bold, GraphicsUnit.Point, 204);
            buttonAddProduct.Location = new Point(3, 3);
            buttonAddProduct.Name = "buttonAddProduct";
            buttonAddProduct.Size = new Size(151, 29);
            buttonAddProduct.TabIndex = 1;
            buttonAddProduct.Text = "Добавить Product";
            buttonAddProduct.UseVisualStyleBackColor = true;
            buttonAddProduct.Click += buttonAddProduct_Click;
            // 
            // buttonDelete
            // 
            buttonDelete.Font = new Font("Times New Roman", 10.2F, FontStyle.Bold, GraphicsUnit.Point, 204);
            buttonDelete.Location = new Point(160, 3);
            buttonDelete.Name = "buttonDelete";
            buttonDelete.Size = new Size(151, 29);
            buttonDelete.TabIndex = 3;
            buttonDelete.Text = "Удалить";
            buttonDelete.UseVisualStyleBackColor = true;
            buttonDelete.Click += buttonDelete_Click;
            // 
            // buttonEditProduct
            // 
            buttonEditProduct.Font = new Font("Times New Roman", 10.2F, FontStyle.Bold, GraphicsUnit.Point, 204);
            buttonEditProduct.Location = new Point(317, 3);
            buttonEditProduct.Name = "buttonEditProduct";
            buttonEditProduct.Size = new Size(164, 29);
            buttonEditProduct.TabIndex = 4;
            buttonEditProduct.Text = "Редактировать";
            buttonEditProduct.UseVisualStyleBackColor = true;
            buttonEditProduct.Click += buttonEditProduct_Click;
            // 
            // flowLayoutPanel2
            // 
            flowLayoutPanel2.AutoSize = true;
            flowLayoutPanel2.Controls.Add(listProducts);
            flowLayoutPanel2.Location = new Point(8, 31);
            flowLayoutPanel2.Name = "flowLayoutPanel2";
            flowLayoutPanel2.Size = new Size(321, 430);
            flowLayoutPanel2.TabIndex = 26;
            // 
            // listProducts
            // 
            listProducts.FormattingEnabled = true;
            listProducts.Location = new Point(3, 3);
            listProducts.Name = "listProducts";
            listProducts.Size = new Size(313, 424);
            listProducts.TabIndex = 0;
            listProducts.SelectedIndexChanged += listProducts_SelectedIndexChanged;
            // 
            // EditDialog
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(678, 470);
            Controls.Add(buttonCancel);
            Controls.Add(buttonOk);
            Controls.Add(labelBattery);
            Controls.Add(checkHasBattery);
            Controls.Add(labelWeight);
            Controls.Add(textBoxWeight);
            Controls.Add(labelPrice);
            Controls.Add(textBoxPrice);
            Controls.Add(labelCategory);
            Controls.Add(textBoxCategory);
            Controls.Add(labelName);
            Controls.Add(textBoxName);
            Controls.Add(labelManufactorer);
            Controls.Add(textBoxManufactorer);
            Controls.Add(flowLayoutPanel3);
            Controls.Add(flowLayoutPanel2);
            Name = "EditDialog";
            Text = "EditDialog";
            flowLayoutPanel3.ResumeLayout(false);
            flowLayoutPanel2.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button buttonCancel;
        private Button buttonOk;
        private Label labelBattery;
        private CheckBox checkHasBattery;
        private Label labelWeight;
        private TextBox textBoxWeight;
        private Label labelPrice;
        private TextBox textBoxPrice;
        private Label labelCategory;
        private TextBox textBoxCategory;
        private Label labelName;
        private TextBox textBoxName;
        private Label labelManufactorer;
        private TextBox textBoxManufactorer;
        private FlowLayoutPanel flowLayoutPanel3;
        private Button buttonAddProduct;
        private Button buttonDelete;
        private Button buttonEditProduct;
        private FlowLayoutPanel flowLayoutPanel2;
        private ListBox listProducts;
    }
}