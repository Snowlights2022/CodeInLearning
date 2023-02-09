/*Latest renew at 2022.10.20*/
#include<stdio.h>
int main() 
{
	int a[3][4]; int x = 1, y = 1, i, z;
	for (i = 0; i < 12; i++) 
	{
		z = 2 * x * x - 4 * y + 2 * x * y;
		a[x - 1][y - 1] = z;
		y++;
		if (y == 5)x++, y = 1;
	}//生成矩阵
	x = 0, y = 0;
	int max1, max2, max3; 
	int t, u;

	for (u = 0; u < 3; u++) 
	{
		for (i = 0; i < 3; i++) 
		{
			if (a[x][i] > a[x][i + 1])t = a[x][i], a[x][i] = a[x][i + 1], a[x][i + 1] = t;
		}
	}max1 = a[x][i], x++;//Line1

	for (u = 0; u < 3; u++) 
	{
		for (i = 0; i < 3; i++) 
		{
			if (a[x][i] > a[x][i + 1])t = a[x][i], a[x][i] = a[x][i + 1], a[x][i + 1] = t;
		}
	}max2 = a[x][i], x++;//Line2

	for (u = 0; u < 3; u++) 
	{
		for (i = 0; i < 3; i++) 
		{
			if (a[x][i] > a[x][i + 1])t = a[x][i], a[x][i] = a[x][i + 1], a[x][i + 1] = t;
		}
	}max3 = a[x][i];//Line3
	x = 0; 
	int max;

	int b[3] = { max1,max2,max3 };
	max = b[0];
	for (i = 0; i < 3; i++) {
		if (b[i] > max)max = b[i];
	}
	printf("%d", max);
}