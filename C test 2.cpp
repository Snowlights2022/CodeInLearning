/*Latest renew at 2023.2.7*/
#include <stdio.h>
#include<math.h>
double max(double a, double b)//define a function for task2, for comparsion.
{
	double c;
	if (a > b)c = a;
	else c = b;
	return(c);
}
/*这是我的作业，第一部分是数列求和，
第二部分是作业一比较数据大小，
第三部分是作业习题二完成判别并且输出可能存在的根的功能，
第四部分是作业三关于绳子长度问题的解*/
int main() {
	printf("We will use it to finish four tasks in order,first one is to sum a sequence.It will be print out before task two.\n");
//Task 1
	int symbol = 1;//Positive&Negative symbols
	double sec = 2, sum = 1, circle;
	while (sec <= 100)
	{
		symbol = -symbol;
		circle = symbol / sec;//circle就是通项
		sum = sum + circle;
		sec = sec + 1;//分母更新
	}
	printf("Well done!\nThe sum of sequence is %f\nNext one is task two,to choose the largest number in three nums.", sum);
//Task2
	double x, y, z, m; 
	printf("Please enter x,y,z in order,use backspace to seprate.\n");
	scanf_s("%lf %lf %lf", &x, &y, &z);//使用lf确保大多数情况下输入不出错
	m=max(x, max(y, z));
	/*这个简略结构等效于
	a=max(x,y);b=max(y,z);m=max(a,b)
	之后输出m*/
	printf("Well done!\nThe largest one is %lf.\nThe next one is to solve quadratic equation of one variable.\n",m);
	//作业二——一元二次方程公式法求解
	double A, B, C, delta, re1, re2, p, q;
	printf("Please entre A,B,C in order!\n");//Ax2+Bx+C=0
	scanf_s("%lf%lf%lf", &A, &B, &C);
	delta = B * B - 4 * A * C;
	if (delta >= 0)
	{
		p = -B / (2.0 * A); q = sqrt(delta) / (2.0 * A); re1 = p + q; re2 = p - q;
		printf("Well done!\n");
		printf("re1=%f\nre2=%f\n", re1, re2);
	}
	else
	{printf("The number you entered will result in a complexroot,and the caculation has stopped!\n");};
	//作业三
	double L = 10; int T = 0;//绳子总长度为10米，减半到指定长度以下所需时间为T
	do {L = L / 2;T = T + 1;} 
	while (L >= 0.25);
	printf("It needs %d days to make it.\n", T);
	return 666;
}