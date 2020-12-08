#include<stdio.h>
void haaa(int a, char c)
{
    printf("a:%d, c:%d\n",a,c);
}
int main()
{
    void (*fun_pointer)(int,char) = NULL;
    fun_pointer = haaa;
    fun_pointer(1,'a');
    printf("&haaa:%p, haaa:%p\n", &haaa, haaa); 
    printf("fun_pointer:%p, *fun_pointer:%p\n", fun_pointer, *fun_pointer); 
    return 0;
}
