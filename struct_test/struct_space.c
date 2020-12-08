#include<stdio.h>
struct example1_t {
	char  a;
	int   b;
	short c;
};
struct example2_t {
	char  a;
	short c;
	int   b;
};
struct example3_t {
	char  a;
	char  b[4];
	short   c;
	int     d;
};
struct example4_t {
	char a;
	int  b;
	double c;
};
struct example5_t {
	char a;
	struct example4_t c;
};
int main()
{
	//win 64
	char a[3];
	int  b[3];
	char * c;
	int  * d;
	struct example1_t * e;
	printf("void:%d\n",sizeof(void));
	printf("char:%d\n",sizeof(char));
	printf("short:%d\n",sizeof(short));
    printf("int:%d\n",sizeof(int));
    printf("long:%d\n",sizeof(long));
    printf("float:%d\n",sizeof(float));
    printf("double:%d\n",sizeof(double));
    printf("char a[3]:%d\n",sizeof(a));
    printf("int b[3]:%d\n",sizeof(b));
    printf("char * c:%d\n",sizeof(c));
    printf("int * d:%d\n",sizeof(d));
    printf("example1 * e:%d\n",sizeof(e));
	printf("example1: %d\n",sizeof(struct example1_t));
	printf("example2: %d\n",sizeof(struct example2_t));
	printf("example3: %d\n",sizeof(struct example3_t));
	printf("example4: %d\n",sizeof(struct example4_t));
	printf("example5: %d\n",sizeof(struct example5_t));
	return 0;
}
