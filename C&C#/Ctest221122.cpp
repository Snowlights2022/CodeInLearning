/*Latest renew at 2023.2.8*/
#include<stdio.h>
#include <string.h>//task2 needed.
#pragma warning(disable : 4996)//strcpy error
int main()
{ 
	goto task2;
task1:
	{
		void swap1(int* p1, int* p2);
		int n1, n2, n3;
		int* p1, * p2, * p3;
		printf("请输入三个整数：\n");
		scanf_s("%d %d %d", &n1, &n2, &n3);
		p1 = &n1; p2 = &n2; p3 = &n3;
		if (n1 > n2) swap1(p1, p2);
		if (n1 > n3) swap1(p1, p3);
		if (n2 > n3) swap1(p2, p3);
		printf("%d<=%d<=%d\n", n1, n2, n3);
		return 0;
	}
task2:
	{
		void swap2(char*, char*); 
		char str1[20], str2[20], str3[20];
		printf("请输入三个字符串,输入完毕一个之后按回车\n"); 
		gets_s(str1); gets_s(str2); gets_s(str3);
		//scanf_s("%s %s %s", &str1, &str2, &str3);
		if (strcmp(str1, str2) > 0)  swap2(str1, str2);
		if (strcmp(str1, str3) > 0)  swap2(str1, str3);
		if (strcmp(str2, str3) > 0)  swap2(str2, str3); 
		printf("%s<=%s<=%s", str1, str2, str3); 
		return 1;
	}
task3:
	{

	}//空置
} 
void swap1(int* p1, int* p2) 
{
	int p;
	p = *p1; 
	*p1 = *p2; 
	*p2 = p; 
}
void swap2(char* p1, char* p2) 
{ 
	char p[20];
	strcpy(p, p1);
	strcpy(p1, p2);
	strcpy(p2, p);
}