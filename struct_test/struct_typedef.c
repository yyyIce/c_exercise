#include<stdio.h>
typedef struct student_t
{
	char name[128];
	int  sex;
	int  age;
}student;

int main()
{
	struct student_t cc = {"Sarah",0,18};
	//student cc = {"Sarah",0,18};
	printf("student size: %d\n", sizeof(student));
	printf("cc.name: %s\n", cc.name);
	printf("cc.sex: %d\n", cc.sex);
	printf("cc.age: %d\n", cc.age);
	return 0;
}
