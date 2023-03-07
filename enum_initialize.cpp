#include <stdio.h>
enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun }; 

int main()
{
	enum week today; 
	printf("%d, %d\n", Mon, Sun);
	
	
	//today = 5; 编译器会报错
	today = (enum week) 5;
	printf("%d\n", today);

	int a = 3;
	if (a == Wed) 
	{
		printf("Today is Wednesday.\n");
	}
	
	/* today默认值 */
	printf("Today Defalut is %d.\n", today);
	/* 修改today */
	today = Thurs;
	printf("Today Now is %d.\n", today);
	
	/* 占用空间 */ 
	printf("%d, %d, %d, %d, %d\n", sizeof(enum week), sizeof(today), sizeof(Mon), sizeof(Wed), sizeof(int) );
	
	return 0;
}

