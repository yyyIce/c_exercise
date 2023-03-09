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
	
	/* xx_1和xx_2大小相同，xx_3只有一个内存单元 */ 
	struct xx_1 * int_first = (struct xx_1 *)calloc(sizeof(struct xx_1),1);
	int_first->a = 8;
	int_first->b = 'L'; //对应ASCII是76 

	/* 查看int_first的值 */
	printf("a: %d, b: %d\n", int_first->a, int_first->b);
	
	/* 可以将int_first强制转换后赋值给char_first */
	struct xx_2 * char_first = (struct xx_2 *)int_first;
	printf("a: %d, b: %d\n", char_first->a, char_first->b);
	
	/* 将2个内存单元的指针强制转换为1个单元的指针 */
	struct xx_3 * char_only = (struct xx_3 *)int_first;
	printf("a: %d, b: %d\n", char_only->a, char_only->b);
	
	/* 查看指针所指位置是否相同 */
	printf("xx_1: %p, xx_2: %p, xx_3: %p\n", int_first, char_first, char_only);
	
	
	/* 申请内存空间的情况下，指针所指位置是否相同 */
	struct xx_2 * char_first2 = (struct xx_2 *)calloc(sizeof(struct xx_2),1);
	char_first2 = (struct xx_2 *)int_first;
	printf("a: %d, b: %d\n", char_first2->a, char_first2->b);	
	printf("xx_1: %p, xx_2: %p\n", int_first, char_first2);
	
	
	return 0;
}

