using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Exp1
{
    public partial class Alertwarn : Form
    {
        public Alertwarn()
        {
            InitializeComponent();
        }

        public void ExitWarnpage_Click(object sender, EventArgs e)
        {
            this.Hide();

        }
    }
}
