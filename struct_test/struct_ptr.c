#include<stdio.h>
#include<stdlib.h>
typedef struct student_t
{
   char name[128];
   int  sex;
   int  age;
}student;

int main()
{
	/*
	//赋值给已有结构体 
	student b = {"Lee", 1, 19};
	student * a;
	a = &b;
	printf("%p\n",&b);
	printf("%p\n",a);
	printf("%s,%d,%d\n",a->name, a->sex, a->age);
	*/
	
	student * a = (student *)malloc(sizeof(student));
	a->age = 19;
	printf("%d\n",a->age); 
}
