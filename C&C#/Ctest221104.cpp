/*Latest renew at 2022.11.4*/
#include<stdio.h>
int main()
{
	goto task2;
task1://选择法（起泡法）数字排序
	{
		int num[10] = {};
		printf("Please enter ten ints.\n");
		for (int i = 0; i < 10; i++)
		{
			scanf_s("%d", &num[i]);
		}
		int temp;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9 - i; j++)
			{
				if (num[j] >= num[j + 1])
				{
					temp = num[j + 1];
					num[j + 1] = num[j];
					num[j] = temp;
					temp = 0;
				}
			}
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", num[i]);
		}
		printf("\n");
		return 0;
	}
task2://统计字符种类及数量
	{
		int daxie=0, xiaoxie=0, num=0, bac=0, oth = 0;//大小写，数字，空格，其他
		char c;
		for (int step = 0; step<=240  ; step++)
		{ 
			c = getchar();
			if (c >= '0' && c <= '9')num = num + 1;
			else
			{
			if (c >= 'A' && c <= 'Z')daxie = daxie + 1;
			else
			{
				if (c >= 'a' && c <= 'z')xiaoxie = xiaoxie + 1;
				else
				{
					if (c == 32)bac = bac + 1;
					else oth = oth + 1;
				}
			}
		}
		
		}
		printf("大写字母有%d个，小写有%d个，数字有%d个，空格出现%d个，其他字符共有%d个。",daxie, xiaoxie, num, bac, oth);
		return 1;
	}
}