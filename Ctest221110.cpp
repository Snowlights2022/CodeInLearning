/*Latest renew at 2023.2.8*/
#include<stdio.h>
int sushu(int a) 
{
	int znic;
	if (a==0 || a==1)znic = 0;//znic=0 means the num entered is not a prime number
	else
	{
		int i;
		for (i = 2;; i++)
		{
			if (a % i == 0)break;//break runout this 'for'
		}
		if (i >= a) znic=1;
		else znic = 0;
	}
	return znic;
}//Using int to simplify comparision
int main()
{
	goto task2;
task1: 
	{
	int num;
	printf("请输入一个整数：\n");
	scanf_s("%d", &num);
	if (sushu(num) == 0) { printf("%d不是素数。", num); return 0; }
	else{ printf("%d是素数。", num); return 1; }
	}
task2: 
	{
		for (int step = 100; step <= 200; step++)
		{
			if (sushu(step) == 1) { printf("%4d", step); }
		}
	}
}