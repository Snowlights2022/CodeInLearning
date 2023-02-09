/*Latest renew at 2023.2.9*/
#include<stdio.h>
int main()
{
	int routine[3] = { 1,1,0};
	for (int m = 1; m <= 20; m++)
	{
		printf("%d %d", routine[1], routine[2]);
		routine[1] = routine[1] + routine[2];
		routine[2] = routine[2] + routine[1];
		if (m % 2 == 0||m==1) { printf("\n"); };
	}
	return 0;
}