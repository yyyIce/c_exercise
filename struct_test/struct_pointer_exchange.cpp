#include <stdio.h>
#include <stdlib.h>
struct xx_1
{
	int a;
	char b;
};
struct xx_2
{
	char a;
	int b;
};
struct xx_3
{
	char a;
	char b;
};

int main()
{
	
	/* xx_1��xx_2��С��ͬ��xx_3ֻ��һ���ڴ浥Ԫ */ 
	struct xx_1 * int_first = (struct xx_1 *)calloc(sizeof(struct xx_1),1);
	int_first->a = 8;
	int_first->b = 'L'; //��ӦASCII��76 

	/* �鿴int_first��ֵ */
	printf("a: %d, b: %d\n", int_first->a, int_first->b);
	
	/* ���Խ�int_firstǿ��ת����ֵ��char_first */
	struct xx_2 * char_first = (struct xx_2 *)int_first;
	printf("a: %d, b: %d\n", char_first->a, char_first->b);
	
	/* ��2���ڴ浥Ԫ��ָ��ǿ��ת��Ϊ1����Ԫ��ָ�� */
	struct xx_3 * char_only = (struct xx_3 *)int_first;
	printf("a: %d, b: %d\n", char_only->a, char_only->b);
	
	/* �鿴ָ����ָλ���Ƿ���ͬ */
	printf("xx_1: %p, xx_2: %p, xx_3: %p\n", int_first, char_first, char_only);
	
	
	/* �����ڴ�ռ������£�ָ����ָλ���Ƿ���ͬ */
	struct xx_2 * char_first2 = (struct xx_2 *)calloc(sizeof(struct xx_2),1);
	char_first2 = (struct xx_2 *)int_first;
	printf("a: %d, b: %d\n", char_first2->a, char_first2->b);	
	printf("xx_1: %p, xx_2: %p\n", int_first, char_first2);
	
	
	return 0;
}

