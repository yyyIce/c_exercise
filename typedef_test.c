#include<stdio.h>
typedef char (* ICE_PTR_ARR)[10]; //Ïàµ±ÓÚchar (* p)[10]; 
int main()
{
	char str [4][10] = {"test1","yeah","good","great"};
    ICE_PTR_ARR p;
    p = str;
    int i = 0; 
    for(i = 0; i<4; i++){
    	printf("%s\n",p[i]);
	}
    return 0;
}
