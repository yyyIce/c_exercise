#include<stdio.h>
int main()
{
	int a[4] = {1,2,3,4};
    int * p1 = a;
    int i = 0;
    for(i = 0; i < 4; i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\n");
    
    int b[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
    int (*p2)[4] = b;
    printf("sizeof(int): %d\n",sizeof(int));
    printf("p:%p    , p+1:%p\n",p2 , p2+1);
    printf("&b[1][0]:%p\tb[1]:%p\t*(p+1):%p\n",&b[1][0],b[1],*(p2+1));
    printf("b[1][0]:%d\t*(b[1]+1):%d\t*(*(p+1)+1):%d\n",b[1][0],*(b[1]+1),*(*(p2+1)+1) );
    
    return 0;
}
