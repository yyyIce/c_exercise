#include <stdio.h>
struct student_t2
{
   char * name;
   int  sex;
   int  age;
};
struct student_t1
{
   char name[128];
   int  sex;
   int  age;
};
int main()
{
	struct student_t1 s1 = { "Sarah", 0, 18};
	printf("%s, %d, %d\n", s1.name, s1.sex, s1.age);

/*错误示例 
	struct student_t1 s2;
	s2.name = "Sam";
	s2.sex = 1;
	s2.age = 19;
	printf("%s, %d, %d\n", s2.name, s2.sex, s2.age);
	*/ 
	struct student_t2 s3;
	s3.name = "Sam";
	s3.sex = 1;
	s3.age = 19;
	printf("%s, %d, %d\n", s3.name, s3.sex, s3.age);
	
	struct student_t2 s4;
	char a[10] = "Sally";
	s4.name = a;               //a是数组首地址 
	s4.sex = 1;
	s4.age = 19;
	printf("%p\n", a);          //%p可以输出变量存储的地址，000000000062FD50 
	printf("%s\n", a);          //%s寻址，输出地址内存储的内容，Sally 
	
/*	直接赋值的地址 
	struct student_t2 s4;
	s4.name = "Sally";
	s4.sex = 1;
	s4.age = 19;*/ 
	
	printf("%p\n", s4.name);    //输出s4.name存储(指向)的地址，000000000062FD50，可以发现与a的地址相同 
	printf("%p\n", &s4.name);   //输出s4.name本身的地址，000000000062FD60 
	printf("%c\n", *s4.name);   //注意使用%c，'*'为取地址中存储的数值，s4.name中存储的内容是第一个字母'S' 
	printf("%s\n", s4.name);    //%s，输出s4.name这一串地址存储的内容，Sally 
	printf("%p\n", &*s4.name);  //输出s4.name存储内容'S'的地址， 000000000062FD50
	
	struct student_t2 s5 = {
        .name = "Tom",
        .sex = 1,
        .age = 10
    };
    printf("%s, %d, %d\n", s5.name, s5.sex, s5.age);
	return 0;
}

