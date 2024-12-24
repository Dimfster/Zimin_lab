namespace Zimin_Lab6
{
    partial class EditProductDialog
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
            labePrice = new Label();
            textBoxPrice = new TextBox();
            labelCategory = new Label();
            textBoxCategory = new TextBox();
            labelName = new Label();
            textBoxName = new TextBox();
            labelManufacturere = new Label();
            textBoxManufactorer = new TextBox();
            checkElectronics = new CheckBox();
            SuspendLayout();
            // 
            // buttonCancel
            // 
            buttonCancel.Location = new Point(180, 409);
            buttonCancel.Name = "buttonCancel";
            buttonCancel.Size = new Size(94, 29);
            buttonCancel.TabIndex = 39;
            buttonCancel.Text = "Отмена";
            buttonCancel.UseVisualStyleBackColor = true;
            buttonCancel.Click += buttonCancel_Click;
            // 
            // buttonOk
            // 
            buttonOk.Location = new Point(72, 409);
            buttonOk.Name = "buttonOk";
            buttonOk.Size = new Size(94, 29);
            buttonOk.TabIndex = 38;
            buttonOk.Text = "Ок";
            buttonOk.UseVisualStyleBackColor = true;
            buttonOk.Click += buttonOk_Click;
            // 
            // labelBattery
            // 
            labelBattery.AutoSize = true;
            labelBattery.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelBattery.Location = new Point(25, 366);
            labelBattery.Name = "labelBattery";
            labelBattery.Size = new Size(98, 25);
            labelBattery.TabIndex = 37;
            labelBattery.Text = "Батарея";
            // 
            // checkHasBattery
            // 
            checkHasBattery.AutoSize = true;
            checkHasBattery.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            checkHasBattery.Location = new Point(239, 365);
            checkHasBattery.Name = "checkHasBattery";
            checkHasBattery.Size = new Size(83, 29);
            checkHasBattery.TabIndex = 36;
            checkHasBattery.Text = "Есть";
            checkHasBattery.UseVisualStyleBackColor = true;
            // 
            // labelWeight
            // 
            labelWeight.AutoSize = true;
            labelWeight.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelWeight.Location = new Point(142, 287);
            labelWeight.Name = "labelWeight";
            labelWeight.Size = new Size(50, 25);
            labelWeight.TabIndex = 35;
            labelWeight.Text = "Вес";
            // 
            // textBoxWeight
            // 
            textBoxWeight.Location = new Point(11, 315);
            textBoxWeight.Name = "textBoxWeight";
            textBoxWeight.Size = new Size(326, 27);
            textBoxWeight.TabIndex = 34;
            // 
            // labePrice
            // 
            labePrice.AutoSize = true;
            labePrice.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labePrice.Location = new Point(135, 171);
            labePrice.Name = "labePrice";
            labePrice.RightToLeft = RightToLeft.Yes;
            labePrice.Size = new Size(66, 25);
            labePrice.TabIndex = 30;
            labePrice.Text = "Цена";
            labePrice.TextAlign = ContentAlignment.TopCenter;
            // 
            // textBoxPrice
            // 
            textBoxPrice.Location = new Point(11, 199);
            textBoxPrice.Name = "textBoxPrice";
            textBoxPrice.Size = new Size(326, 27);
            textBoxPrice.TabIndex = 33;
            // 
            // labelCategory
            // 
            labelCategory.AutoSize = true;
            labelCategory.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelCategory.Location = new Point(108, 229);
            labelCategory.Name = "labelCategory";
            labelCategory.Size = new Size(121, 25);
            labelCategory.TabIndex = 32;
            labelCategory.Text = "Категория";
            // 
            // textBoxCategory
            // 
            textBoxCategory.Location = new Point(11, 257);
            textBoxCategory.Name = "textBoxCategory";
            textBoxCategory.Size = new Size(326, 27);
            textBoxCategory.TabIndex = 31;
            // 
            // labelName
            // 
            labelName.AutoSize = true;
            labelName.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelName.Location = new Point(117, 55);
            labelName.Name = "labelName";
            labelName.RightToLeft = RightToLeft.Yes;
            labelName.Size = new Size(112, 25);
            labelName.TabIndex = 26;
            labelName.Text = "Название";
            labelName.TextAlign = ContentAlignment.TopCenter;
            // 
            // textBoxName
            // 
            textBoxName.Location = new Point(11, 83);
            textBoxName.Name = "textBoxName";
            textBoxName.Size = new Size(326, 27);
            textBoxName.TabIndex = 29;
            // 
            // labelManufacturere
            // 
            labelManufacturere.AutoSize = true;
            labelManufacturere.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            labelManufacturere.Location = new Point(83, 113);
            labelManufacturere.Name = "labelManufacturere";
            labelManufacturere.Size = new Size(172, 25);
            labelManufacturere.TabIndex = 28;
            labelManufacturere.Text = "Производитель";
            // 
            // textBoxManufactorer
            // 
            textBoxManufactorer.Location = new Point(11, 141);
            textBoxManufactorer.Name = "textBoxManufactorer";
            textBoxManufactorer.Size = new Size(326, 27);
            textBoxManufactorer.TabIndex = 27;
            // 
            // checkElectronics
            // 
            checkElectronics.AutoSize = true;
            checkElectronics.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            checkElectronics.Location = new Point(87, 12);
            checkElectronics.Name = "checkElectronics";
            checkElectronics.Size = new Size(174, 29);
            checkElectronics.TabIndex = 40;
            checkElectronics.Text = "Электроника";
            checkElectronics.UseVisualStyleBackColor = true;
            checkElectronics.CheckedChanged += checkBox2_CheckedChanged;
            // 
            // EditProductDialog
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(345, 450);
            Controls.Add(checkElectronics);
            Controls.Add(buttonCancel);
            Controls.Add(buttonOk);
            Controls.Add(labelBattery);
            Controls.Add(checkHasBattery);
            Controls.Add(labelWeight);
            Controls.Add(textBoxWeight);
            Controls.Add(labePrice);
            Controls.Add(textBoxPrice);
            Controls.Add(labelCategory);
            Controls.Add(textBoxCategory);
            Controls.Add(labelName);
            Controls.Add(textBoxName);
            Controls.Add(labelManufacturere);
            Controls.Add(textBoxManufactorer);
            Name = "EditProductDialog";
            Text = "Добавление/Изменение";
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
        private Label labePrice;
        private TextBox textBoxPrice;
        private Label labelCategory;
        private TextBox textBoxCategory;
        private Label labelName;
        private TextBox textBoxName;
        private Label labelManufacturere;
        private TextBox textBoxManufactorer;
        private CheckBox checkElectronics;
    }
}