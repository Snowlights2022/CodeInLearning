/*Latest renew at 2023.2.7*/
#include<stdio.h>
//该程序实现了矩阵转置
int main()
{
	int a[2][3] = { {1,2,3},{4,5,6} };//矩阵a是2行3列的矩阵
	int b[3][2],i,j;
	printf("Martix A is \n");
	for (i=0; i <=1; i++)//i是列指标
	{
		for (j=0; j <=2; j++)
		{
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
		}
	printf("\n");
	}
	printf("The Martex B is \n");
	for  (i = 0; i <=2; i++)
	{
		for (j= 0;j<=1 ; j++)
	    {
			printf("%5d", b[i][j]);
	    }
		printf("\n");
	}
	return  0;
}