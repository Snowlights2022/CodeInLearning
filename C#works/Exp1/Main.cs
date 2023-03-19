using System.Drawing.Text;

namespace Exp1
{
    public partial class Main : Form
    {
        public Main()
        {
            InitializeComponent();
        }

        public void Form1_Load(object sender, EventArgs e)
        {

        }

        private void StartCalculate_Click(object sender, EventArgs e)
        {
            double Result = new();
            Alertwarn Alertform = new Alertwarn();
            if (CalPlus.Checked == true)
            {
                Result = Convert.ToDouble(FirstnumInput.Text) + Convert.ToDouble(SecondnumInput.Text);
                CalOutput.Text = Result.ToString();
            }
            if (CalMinus.Checked == true)
            {
                Result = Convert.ToDouble(FirstnumInput.Text) - Convert.ToDouble(SecondnumInput.Text);
                CalOutput.Text = Result.ToString();
            }
            if (CalMultiple.Checked == true)
            {
                Result = Convert.ToDouble(FirstnumInput.Text) * Convert.ToDouble(SecondnumInput.Text);
                CalOutput.Text = Result.ToString();
            }
            if (CalDivide.Checked == true)
            {
                if (Convert.ToDouble(SecondnumInput.Text) == 0)
                {
                    Alertform.Show();
                    SecondnumInput.Text = " ";
                    CalOutput.Text = " ";
                }
                else
                {
                    Result = Convert.ToDouble(FirstnumInput.Text) / Convert.ToDouble(SecondnumInput.Text);
                    CalOutput.Text = Result.ToString();
                }

            }

        }
    }
}