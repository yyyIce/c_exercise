#include<stdio.h>
int main()
{
    int c = 5;
    int * p = &c;
    printf("c:%d	&c:%p\n", c, &c);
    printf("&p:%p	p:%p    *p:%d\n", &p, p, *p);
    return 0; 
}

