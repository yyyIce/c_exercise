#include <stdio.h>
enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun }; 

int main()
{
	enum week today; 
	printf("%d, %d\n", Mon, Sun);
	
	
	//today = 5; �������ᱨ��
	today = (enum week) 5;
	printf("%d\n", today);

	int a = 3;
	if (a == Wed) 
	{
		printf("Today is Wednesday.\n");
	}
	
	/* todayĬ��ֵ */
	printf("Today Defalut is %d.\n", today);
	/* �޸�today */
	today = Thurs;
	printf("Today Now is %d.\n", today);
	
	/* ռ�ÿռ� */ 
	printf("%d, %d, %d, %d, %d\n", sizeof(enum week), sizeof(today), sizeof(Mon), sizeof(Wed), sizeof(int) );
	
	return 0;
}

