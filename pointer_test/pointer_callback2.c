#include <stdio.h>

int test(int a, int b, int (* callback)())
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
	int ret = test(4, 8, max);
	printf("result:%d\n", ret);
	
	ret = test(4, 8, min);
	printf("result:%d\n", ret);
	
	return 0;
}
