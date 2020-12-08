#include<stdio.h>
int main()
{
    int a = 5;
    void * p1 = &a;
    int * p2 = (int *)p1;
    //最好不要使用下面这一句，C++编译器会报错
    //int * p2 = p1;
    printf("%d\n", *p2);
}
