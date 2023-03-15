/*Latest renew at 2023.2.7*/
#include<stdio.h>
#include<math.h>
int main()
{
//接下来是作业二的代码，实现利用数组递推斐波那契数列前四十项并输出
	int fu[5]{ 1,1,2,3,5 };
	int time = 0;
	printf("%12d  %12d \n", fu[0], fu[1]);
fuck:
	{
		fu[2] = fu[0] + fu[1];
		printf("%12d  ", fu[2]);
		time++;
		fu[0] = fu[1];
		fu[1] = fu[2];
		if (time % 2 == 0) printf("\n");
	}
	if (time < 38)goto fuck;//当时能力所限没写出来for/dowhile，忍不住用这个方式写……
	/*以下是尝试（
	 int seq[3]{1,1,2},N=2;
	printf('%d %d',seq[1],seq[2]);
	while(N<=40)
	{
	seq[2]=seq[0]+seq[1];
	printf('%d',seq[2]);
	N++;
	if(N%2==0)printf('\n')
	seq[0]=seq[1];
	seq[1]=seq[2];
	}
	|未经验证|
	*/
//接下来是作业三的代码，实现计算一定范围内的素数
		for (int k, i, m = 0,n = 101; n <= 200; n = n + 2)//n就是计算范围，此时为101-200
		{
			k = sqrt(n);
			for (i = 2; i <= k; i++)
				if (n % i == 0)break;//数学解释——采取2至原数一半的范围计算，减少工作量。看不懂了回去复习高等代数（恼
			if (i >= k + 1)//过半之后没有符合要求的，就可以确定是个质数了，着手输出即可
			{
				printf("%d  ", n);
				m = m + 1;//m计数，10个一行
			}
			if (m % 10 == 0)printf("\n");
		}
		printf("\n");
//以下是第四题冒泡法排序
	int i, temp, j, p[10]{};
	printf("Enter 10 random numbers.\n");//输入10随机数
		for (i = 0; i < 10; i++)//这里的i是局部的，和下面没有关系
		{
			scanf_s("%d", &p[i]);
			printf("\n");
		}
		for (j = 0; j < 9; j++)//十个数，数组排列序号是0-9!!!
		{
			for (i = 0; i < 9 - j; i++)
			{
				if (p[i] > p[i + 1]) { temp = p[i]; p[i] = p[i + 1]; p[i + 1] = temp; }//temp交换前后两个元素
			}
		}
		printf("Sorted here......\n");
		for(int i = 0; i < 10; i++) { printf("%d ", p[i]); };
	return 4;
}