/*Latest renew at 2023.2.7*/
#include<stdio.h>
int main()
{
	int len{}; double price;//实现阶梯收费功能
    printf("Please enter the distance you have used.\n");
    scanf_s("%d", &len);
	if (len < 250)price = len;
    if (len>= 250 && len < 500)price = len * 0.98;
	if (len>= 500 && len < 1000)price = len * 0.95;
	if (len>= 1000 && len< 2000)price = len * 0.92;
	if (len>= 2000 && len< 3000)price = len * 0.9;
	if (len>= 3000)price = len * 0.85;
   printf("The fee is %lf.", price);
   return 255;
}