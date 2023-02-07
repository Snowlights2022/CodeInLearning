/*Latest renew at 2023.2.7*/
#include<stdio.h>
#include<math.h>//LOG needed.
int main()
{
	int d = 300000, p = 6000;
	double r = 0.01;//赋初始值，贷款额度300000，月还6000，利率0.01，定义所需要的月数为n。
	double n,a,b;
	a = log(p / (p - d * r)); b = log(1 + r);
	n = a / b;
	printf("The month needed is %3.1f .",n);//输出结果,三位数字且保留一位小数
	return 1;
}