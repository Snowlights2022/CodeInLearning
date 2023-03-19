namespace Exp1
{
    partial class Alertwarn
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
            textBox1 = new TextBox();
            ExitWarnpage = new Button();
            SuspendLayout();
            // 
            // textBox1
            // 
            textBox1.Location = new Point(12, 12);
            textBox1.Multiline = true;
            textBox1.Name = "textBox1";
            textBox1.ReadOnly = true;
            textBox1.ShortcutsEnabled = false;
            textBox1.Size = new Size(326, 164);
            textBox1.TabIndex = 0;
            textBox1.TabStop = false;
            textBox1.Text = "警告！\r\n输入的第二个数字不符合四则运算要求，请重新输入！";
            // 
            // ExitWarnpage
            // 
            ExitWarnpage.Location = new Point(118, 182);
            ExitWarnpage.Name = "ExitWarnpage";
            ExitWarnpage.Size = new Size(110, 50);
            ExitWarnpage.TabIndex = 1;
            ExitWarnpage.Text = "确定";
            ExitWarnpage.UseVisualStyleBackColor = true;
            ExitWarnpage.Click += ExitWarnpage_Click;
            // 
            // Alertwarn
            // 
            AutoScaleDimensions = new SizeF(17F, 36F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(350, 239);
            Controls.Add(ExitWarnpage);
            Controls.Add(textBox1);
            Name = "Alertwarn";
            Text = "Warning!";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TextBox textBox1;
        private Button ExitWarnpage;
    }
}