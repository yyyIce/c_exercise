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

/*����ʾ�� 
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
	s4.name = a;               //a�������׵�ַ 
	s4.sex = 1;
	s4.age = 19;
	printf("%p\n", a);          //%p������������洢�ĵ�ַ��000000000062FD50 
	printf("%s\n", a);          //%sѰַ�������ַ�ڴ洢�����ݣ�Sally 
	
/*	ֱ�Ӹ�ֵ�ĵ�ַ 
	struct student_t2 s4;
	s4.name = "Sally";
	s4.sex = 1;
	s4.age = 19;*/ 
	
	printf("%p\n", s4.name);    //���s4.name�洢(ָ��)�ĵ�ַ��000000000062FD50�����Է�����a�ĵ�ַ��ͬ 
	printf("%p\n", &s4.name);   //���s4.name����ĵ�ַ��000000000062FD60 
	printf("%c\n", *s4.name);   //ע��ʹ��%c��'*'Ϊȡ��ַ�д洢����ֵ��s4.name�д洢�������ǵ�һ����ĸ'S' 
	printf("%s\n", s4.name);    //%s�����s4.name��һ����ַ�洢�����ݣ�Sally 
	printf("%p\n", &*s4.name);  //���s4.name�洢����'S'�ĵ�ַ�� 000000000062FD50
	
	struct student_t2 s5 = {
        .name = "Tom",
        .sex = 1,
        .age = 10
    };
    printf("%s, %d, %d\n", s5.name, s5.sex, s5.age);
	return 0;
}

