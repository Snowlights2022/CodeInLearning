/*Latest renew at 2022.10.28*/
#include<stdio.h>
int main()//三个简单的明文加密方案
{
	
	goto task3; 
task1:
	{
	char c;
	c = getchar();
	while (c != '\n')
	{
		if ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if (c >= 'w' && c <= 'z' || c >= 'W' && c <= 'Z')c = c - 22;
			else c = c + 4;
		}
		printf("%c", c);
		c = getchar();
	}
	printf("\n");
	return 0;
	}
task2:
	{
		char c;
		c = getchar();
		while (c != '\n')
		{
			switch (c)
			{
			case'W':c = 'A'; break;
			case'X':c = 'B'; break;
			case'Y':c = 'C'; break;
			case'Z':c = 'D'; break;
			default:
				if ((c >= 'a' && 'c' <= 'z') || (c >= 'A' && c <= 'Z'))
				{
					if (c >= 'w' && c <= 'z' || c >= 'W' && c <= 'Z')c = c - 22;
					else c = c + 4;
				}
			}
			printf("%c", c);
			c = getchar();
		}
		printf("\n");
		return 1;
	}
task3:
	{
		char c;
		c = getchar();
		while (c != '\n')
		{
			if ((c >= 'a' &&   c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				if (c >= 'A' && c <= 'D' || c >= 'a' && c <= 'd')c = c+22;
				else c = c-4;
			}
			printf("%c", c);
			c = getchar();
		}
		printf("\n");
		return 3;
	}
}