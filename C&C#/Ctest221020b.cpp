/*Latest renew at 2023.2.9*/
#include<stdio.h>
int max(int a, int b) //比较整数大小输出较大者
{   
	int z;
	if (a >= b){z = a;}
	else z = b;
	return z;
}
int main()
{
	int z[3][4]{};
	int i = 0, j = 0;
Initialization:
	{
		for (; i <= 2; i++)
		{
			for (; j <= 3; j++){z[i][j] = 2 * (i + 1) * (i = 1) - 4 * (j + 1) + 2 * (i + 1) * (j + 1);}
		}
	}//完成矩阵z初始化 
		int temp=-114514;//what temp is is not important,hh~
		i =0, j = 0;//reset i&j
		int a[3];
Comparision:
		{
			for (; i <= 2; i++)
			{
				for (; j <= 3; j++) { temp = max(z[i][j], temp); }
				a[i] = temp;
				j = 0;
			}
		}
			int maxium = 0;
			maxium = max(max(a[0], a[1]), a[2]);
			printf("%d", maxium);
	return 0;
}