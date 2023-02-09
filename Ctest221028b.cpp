/*Latest renew at 2022.10.28*/
#include<stdio.h>
int main()
{
	float x, y;
	printf("Please enter a real number X.\n");
	scanf_s("%f", &x);
	if (x < 1)y = x;
	else
	{
		if (x >= 10)y = 3 * x - 11;
		else y = 2 * x -1;
	}
	printf("y=%.2f", y);
	return 0;
}