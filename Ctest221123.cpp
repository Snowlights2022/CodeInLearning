#include<string.h>
#include<stdio.h>

int main() 
{
    goto task2;
task1://还有大问题，不能正确输出对换位置的结果……
    {
        int arr[9]{};
        for (int i = 1; i < 9; i++) { scanf_s("%d ", &arr[i]); }//输入9个元素
       
        for (int *p1, *p2,i = 0, *temp; i < 4; i++) {
            p1 = &arr[i];//取地址
            p2 = &arr[9 - i];
            temp = p1;
            p1 = p2;
            p2 = temp;//位置对换
        }
        for (int p = 0; p < 9; p++) {
            printf("%d ", arr[p]);
        }
        return 0;
    }
task2:
    {

        void f(char* p1, char* p2);
        char a[100], b[100], c[100], d[100];
        gets_s(a);
        gets_s(b);
        printf("\n");
        char* p, * q, * m, * n;
        p = a;
        q = b;
        m = d;
        n = c;
        int i;
        for (i = 0; i < 100; i++, p++, q++, m++, n++) {
            f(p, m);
            f(q, n);
        }
        printf("%s\n", c);
        printf("%s\n", d);
    }
}

void f(char *p1, char *p2)//f就是交换指针值来达到交换数据的目的
{
    char t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}