/*Latest renew at 2023.2.8*/
#include<stdio.h>
void sort()
{
	int i, temp, j;
	int    p[5]={};
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &p[i]);
	}
	for (j = 0; j < 4; j++)//冒泡法，看ctest221020
	{
		for (i = 0; i < 4 - j; i++)
		{
			if (p[i] > p[i + 1])
			{
				temp = p[i]; p[i] = p[i + 1]; p[i + 1] = temp;
			}
		}
	}
	for (int i =4; i >=0; i--) { printf("%5d", p[i]); };
}//从大到小排列
int main()
{
	printf("Enter five ints.\n");
	sort();
	return 0; 
}