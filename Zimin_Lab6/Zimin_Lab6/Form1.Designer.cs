namespace Zimin_Lab6
{
    partial class Form1
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
            menuStrip1 = new MenuStrip();
            FileToolStripMenuItem = new ToolStripMenuItem();
            OpenFileToolStripMenuItem = new ToolStripMenuItem();
            SaveFileToolStripMenuItem = new ToolStripMenuItem();
            ClearToolStripMenuItem = new ToolStripMenuItem();
            EditToolStripMenuItem = new ToolStripMenuItem();
            dataGridViewProducts = new DataGridView();
            menuStrip1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)dataGridViewProducts).BeginInit();
            SuspendLayout();
            // 
            // menuStrip1
            // 
            menuStrip1.ImageScalingSize = new Size(20, 20);
            menuStrip1.Items.AddRange(new ToolStripItem[] { FileToolStripMenuItem, ClearToolStripMenuItem, EditToolStripMenuItem });
            menuStrip1.Location = new Point(0, 0);
            menuStrip1.Name = "menuStrip1";
            menuStrip1.Size = new Size(816, 28);
            menuStrip1.TabIndex = 0;
            menuStrip1.Text = "menuStrip1";
            // 
            // FileToolStripMenuItem
            // 
            FileToolStripMenuItem.DropDownItems.AddRange(new ToolStripItem[] { OpenFileToolStripMenuItem, SaveFileToolStripMenuItem });
            FileToolStripMenuItem.Name = "FileToolStripMenuItem";
            FileToolStripMenuItem.Size = new Size(59, 24);
            FileToolStripMenuItem.Text = "Файл";
            // 
            // OpenFileToolStripMenuItem
            // 
            OpenFileToolStripMenuItem.Name = "OpenFileToolStripMenuItem";
            OpenFileToolStripMenuItem.Size = new Size(224, 26);
            OpenFileToolStripMenuItem.Text = "Открыть";
            OpenFileToolStripMenuItem.Click += OpenFileToolStripMenuItem_Click;
            // 
            // SaveFileToolStripMenuItem
            // 
            SaveFileToolStripMenuItem.Name = "SaveFileToolStripMenuItem";
            SaveFileToolStripMenuItem.Size = new Size(224, 26);
            SaveFileToolStripMenuItem.Text = "Сохранить";
            SaveFileToolStripMenuItem.Click += SaveFileToolStripMenuItem_Click;
            // 
            // ClearToolStripMenuItem
            // 
            ClearToolStripMenuItem.Name = "ClearToolStripMenuItem";
            ClearToolStripMenuItem.Size = new Size(87, 24);
            ClearToolStripMenuItem.Text = "Очистить";
            ClearToolStripMenuItem.Click += ClearToolStripMenuItem_Click;
            // 
            // EditToolStripMenuItem
            // 
            EditToolStripMenuItem.Name = "EditToolStripMenuItem";
            EditToolStripMenuItem.Size = new Size(125, 24);
            EditToolStripMenuItem.Text = "Редактировать";
            EditToolStripMenuItem.Click += EditToolStripMenuItem_Click;
            // 
            // dataGridViewProducts
            // 
            dataGridViewProducts.BackgroundColor = SystemColors.Control;
            dataGridViewProducts.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridViewProducts.Location = new Point(0, 31);
            dataGridViewProducts.Name = "dataGridViewProducts";
            dataGridViewProducts.RowHeadersWidth = 51;
            dataGridViewProducts.Size = new Size(816, 407);
            dataGridViewProducts.TabIndex = 2;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(816, 450);
            Controls.Add(dataGridViewProducts);
            Controls.Add(menuStrip1);
            MainMenuStrip = menuStrip1;
            Name = "Form1";
            Text = "Form1";
            menuStrip1.ResumeLayout(false);
            menuStrip1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)dataGridViewProducts).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private MenuStrip menuStrip1;
        private ToolStripMenuItem FileToolStripMenuItem;
        private ToolStripMenuItem OpenFileToolStripMenuItem;
        private ToolStripMenuItem SaveFileToolStripMenuItem;
        private ToolStripMenuItem ClearToolStripMenuItem;
        private ToolStripMenuItem EditToolStripMenuItem;
        private DataGridView dataGridViewProducts;
    }
}
