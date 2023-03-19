namespace Exp1
{
    partial class Main
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Main));
            FirstnumPointer = new Label();
            SecondnumPointer = new Label();
            CaloutPointer = new Label();
            groupBox1 = new GroupBox();
            CalDivide = new RadioButton();
            CalMultiple = new RadioButton();
            CalMinus = new RadioButton();
            CalPlus = new RadioButton();
            FirstnumInput = new TextBox();
            SecondnumInput = new TextBox();
            CalOutput = new TextBox();
            StartCalculate = new Button();
            groupBox1.SuspendLayout();
            SuspendLayout();
            // 
            // FirstnumPointer
            // 
            resources.ApplyResources(FirstnumPointer, "FirstnumPointer");
            FirstnumPointer.Name = "FirstnumPointer";
            // 
            // SecondnumPointer
            // 
            resources.ApplyResources(SecondnumPointer, "SecondnumPointer");
            SecondnumPointer.Name = "SecondnumPointer";
            // 
            // CaloutPointer
            // 
            resources.ApplyResources(CaloutPointer, "CaloutPointer");
            CaloutPointer.Name = "CaloutPointer";
            // 
            // groupBox1
            // 
            groupBox1.Controls.Add(CalDivide);
            groupBox1.Controls.Add(CalMultiple);
            groupBox1.Controls.Add(CalMinus);
            groupBox1.Controls.Add(CalPlus);
            resources.ApplyResources(groupBox1, "groupBox1");
            groupBox1.Name = "groupBox1";
            groupBox1.TabStop = false;
            // 
            // CalDivide
            // 
            resources.ApplyResources(CalDivide, "CalDivide");
            CalDivide.Name = "CalDivide";
            CalDivide.UseVisualStyleBackColor = true;
            // 
            // CalMultiple
            // 
            resources.ApplyResources(CalMultiple, "CalMultiple");
            CalMultiple.Name = "CalMultiple";
            CalMultiple.UseVisualStyleBackColor = true;
            // 
            // CalMinus
            // 
            resources.ApplyResources(CalMinus, "CalMinus");
            CalMinus.Name = "CalMinus";
            CalMinus.UseVisualStyleBackColor = true;
            // 
            // CalPlus
            // 
            resources.ApplyResources(CalPlus, "CalPlus");
            CalPlus.Name = "CalPlus";
            CalPlus.UseVisualStyleBackColor = true;
            // 
            // FirstnumInput
            // 
            resources.ApplyResources(FirstnumInput, "FirstnumInput");
            FirstnumInput.Name = "FirstnumInput";
            // 
            // SecondnumInput
            // 
            resources.ApplyResources(SecondnumInput, "SecondnumInput");
            SecondnumInput.Name = "SecondnumInput";
            // 
            // CalOutput
            // 
            resources.ApplyResources(CalOutput, "CalOutput");
            CalOutput.Name = "CalOutput";
            CalOutput.ReadOnly = true;
            // 
            // StartCalculate
            // 
            resources.ApplyResources(StartCalculate, "StartCalculate");
            StartCalculate.Name = "StartCalculate";
            StartCalculate.UseVisualStyleBackColor = true;
            StartCalculate.Click += StartCalculate_Click;
            // 
            // Main
            // 
            resources.ApplyResources(this, "$this");
            AutoScaleMode = AutoScaleMode.Dpi;
            Controls.Add(StartCalculate);
            Controls.Add(CalOutput);
            Controls.Add(SecondnumInput);
            Controls.Add(FirstnumInput);
            Controls.Add(groupBox1);
            Controls.Add(CaloutPointer);
            Controls.Add(SecondnumPointer);
            Controls.Add(FirstnumPointer);
            Name = "Main";
            groupBox1.ResumeLayout(false);
            groupBox1.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label FirstnumPointer;
        private Label SecondnumPointer;
        private Label CaloutPointer;
        private GroupBox groupBox1;
        private RadioButton CalDivide;
        private RadioButton CalMultiple;
        private RadioButton CalMinus;
        private RadioButton CalPlus;
        private TextBox FirstnumInput;
        private TextBox SecondnumInput;
        private TextBox CalOutput;
        private Button StartCalculate;
    }
}