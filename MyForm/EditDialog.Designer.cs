namespace MyForm
{
    partial class EditDialog
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            listBox1 = new ListBox();
            button1 = new Button();
            button2 = new Button();
            button3 = new Button();
            button4 = new Button();
            flowLayoutPanel2 = new FlowLayoutPanel();
            flowLayoutPanel3 = new FlowLayoutPanel();
            label1 = new Label();
            textBox2 = new TextBox();
            label2 = new Label();
            textBox1 = new TextBox();
            label3 = new Label();
            textBox3 = new TextBox();
            label4 = new Label();
            textBox4 = new TextBox();
            label5 = new Label();
            textBox5 = new TextBox();
            checkBox1 = new CheckBox();
            label6 = new Label();
            button5 = new Button();
            button6 = new Button();
            flowLayoutPanel2.SuspendLayout();
            flowLayoutPanel3.SuspendLayout();
            SuspendLayout();
            // 
            // listBox1
            // 
            listBox1.FormattingEnabled = true;
            listBox1.Location = new Point(3, 3);
            listBox1.Name = "listBox1";
            listBox1.Size = new Size(313, 424);
            listBox1.TabIndex = 0;
            // 
            // button1
            // 
            button1.Location = new Point(3, 3);
            button1.Name = "button1";
            button1.Size = new Size(151, 29);
            button1.TabIndex = 1;
            button1.Text = "Добавить Product";
            button1.UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            button2.Location = new Point(160, 3);
            button2.Name = "button2";
            button2.Size = new Size(164, 29);
            button2.TabIndex = 2;
            button2.Text = "Добавить Electronics";
            button2.UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            button3.Location = new Point(330, 3);
            button3.Name = "button3";
            button3.Size = new Size(151, 29);
            button3.TabIndex = 3;
            button3.Text = "Удалить";
            button3.UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            button4.Location = new Point(487, 3);
            button4.Name = "button4";
            button4.Size = new Size(164, 29);
            button4.TabIndex = 4;
            button4.Text = "Редактировать";
            button4.UseVisualStyleBackColor = true;
            // 
            // flowLayoutPanel2
            // 
            flowLayoutPanel2.AutoSize = true;
            flowLayoutPanel2.Controls.Add(listBox1);
            flowLayoutPanel2.Location = new Point(8, 41);
            flowLayoutPanel2.Name = "flowLayoutPanel2";
            flowLayoutPanel2.Size = new Size(321, 430);
            flowLayoutPanel2.TabIndex = 10;
            // 
            // flowLayoutPanel3
            // 
            flowLayoutPanel3.Controls.Add(button1);
            flowLayoutPanel3.Controls.Add(button2);
            flowLayoutPanel3.Controls.Add(button3);
            flowLayoutPanel3.Controls.Add(button4);
            flowLayoutPanel3.Dock = DockStyle.Top;
            flowLayoutPanel3.Location = new Point(0, 0);
            flowLayoutPanel3.Name = "flowLayoutPanel3";
            flowLayoutPanel3.Size = new Size(673, 35);
            flowLayoutPanel3.TabIndex = 11;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            label1.Location = new Point(441, 41);
            label1.Name = "label1";
            label1.RightToLeft = RightToLeft.Yes;
            label1.Size = new Size(112, 25);
            label1.TabIndex = 12;
            label1.Text = "Название";
            label1.TextAlign = ContentAlignment.TopCenter;
            // 
            // textBox2
            // 
            textBox2.Location = new Point(335, 69);
            textBox2.Name = "textBox2";
            textBox2.Size = new Size(326, 27);
            textBox2.TabIndex = 15;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            label2.Location = new Point(407, 99);
            label2.Name = "label2";
            label2.Size = new Size(172, 25);
            label2.TabIndex = 14;
            label2.Text = "Производитель";
            // 
            // textBox1
            // 
            textBox1.Location = new Point(335, 127);
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(326, 27);
            textBox1.TabIndex = 13;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            label3.Location = new Point(459, 157);
            label3.Name = "label3";
            label3.RightToLeft = RightToLeft.Yes;
            label3.Size = new Size(66, 25);
            label3.TabIndex = 16;
            label3.Text = "Цена";
            label3.TextAlign = ContentAlignment.TopCenter;
            // 
            // textBox3
            // 
            textBox3.Location = new Point(335, 185);
            textBox3.Name = "textBox3";
            textBox3.Size = new Size(326, 27);
            textBox3.TabIndex = 19;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            label4.Location = new Point(432, 215);
            label4.Name = "label4";
            label4.Size = new Size(121, 25);
            label4.TabIndex = 18;
            label4.Text = "Категория";
            // 
            // textBox4
            // 
            textBox4.Location = new Point(335, 243);
            textBox4.Name = "textBox4";
            textBox4.Size = new Size(326, 27);
            textBox4.TabIndex = 17;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            label5.Location = new Point(466, 273);
            label5.Name = "label5";
            label5.Size = new Size(50, 25);
            label5.TabIndex = 21;
            label5.Text = "Вес";
            // 
            // textBox5
            // 
            textBox5.Location = new Point(335, 301);
            textBox5.Name = "textBox5";
            textBox5.Size = new Size(326, 27);
            textBox5.TabIndex = 20;
            // 
            // checkBox1
            // 
            checkBox1.AutoSize = true;
            checkBox1.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            checkBox1.Location = new Point(563, 351);
            checkBox1.Name = "checkBox1";
            checkBox1.Size = new Size(83, 29);
            checkBox1.TabIndex = 22;
            checkBox1.Text = "Есть";
            checkBox1.UseVisualStyleBackColor = true;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Font = new Font("Times New Roman", 13.8F, FontStyle.Bold, GraphicsUnit.Point, 204);
            label6.Location = new Point(349, 352);
            label6.Name = "label6";
            label6.Size = new Size(98, 25);
            label6.TabIndex = 23;
            label6.Text = "Батарея";
            // 
            // button5
            // 
            button5.Location = new Point(459, 435);
            button5.Name = "button5";
            button5.Size = new Size(94, 29);
            button5.TabIndex = 24;
            button5.Text = "Ок";
            button5.UseVisualStyleBackColor = true;
            // 
            // button6
            // 
            button6.Location = new Point(567, 435);
            button6.Name = "button6";
            button6.Size = new Size(94, 29);
            button6.TabIndex = 25;
            button6.Text = "Отмена";
            button6.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(673, 474);
            Controls.Add(button6);
            Controls.Add(button5);
            Controls.Add(label6);
            Controls.Add(checkBox1);
            Controls.Add(label5);
            Controls.Add(textBox5);
            Controls.Add(label3);
            Controls.Add(textBox3);
            Controls.Add(label4);
            Controls.Add(textBox4);
            Controls.Add(label1);
            Controls.Add(textBox2);
            Controls.Add(label2);
            Controls.Add(textBox1);
            Controls.Add(flowLayoutPanel3);
            Controls.Add(flowLayoutPanel2);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            flowLayoutPanel2.ResumeLayout(false);
            flowLayoutPanel3.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private ListBox listBox1;
        private Button button1;
        private Button button2;
        private Button button3;
        private Button button4;
        private FlowLayoutPanel flowLayoutPanel2;
        private FlowLayoutPanel flowLayoutPanel3;
        private Label label1;
        private TextBox textBox2;
        private Label label2;
        private TextBox textBox1;
        private Label label3;
        private TextBox textBox3;
        private Label label4;
        private TextBox textBox4;
        private Label label5;
        private TextBox textBox5;
        private CheckBox checkBox1;
        private Label label6;
        private Button button5;
        private Button button6;
    }
}
