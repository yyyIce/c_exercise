#include <stdio.h>

int test(int a, int b, int (* callback)(int,int))
{
	return callback(a,b);
}
int max(int a, int b)
{
	return a > b ? a : b;
}
int min(int a, int b)
{
	return a > b ? b : a;
}


int main()
{
	int (* callback_fun)(int,int) = max; 
	int ret = test(4, 8, callback_fun);
	printf("result:%d\n", ret);
	
	callback_fun = min;
	ret = test(4, 8, callback_fun);
	printf("result:%d\n", ret);
	
	return 0;
}
