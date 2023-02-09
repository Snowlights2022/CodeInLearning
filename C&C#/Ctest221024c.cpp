/*Latest renew at 2022.10.24*/
#include<math.h>
#include <stdio.h>
int main()
{
	int year = 10; 
	double sum, rate;
	printf("Please enter the annul rate persentage.\n");
	scanf_s("%le", &rate);
	rate = rate / 100;
	sum = pow((1 + rate), year)*100;
	printf("The total is %f.", sum);
	return 0;
}