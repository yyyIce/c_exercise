#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    printf("参数个数=%d\n",argc);      //输出命令行参数个数
    for (int i=0; i<argc; i++) {
        printf("参数%d: %s\n",i, argv[i]);   //输出每个命令行参数
    }
    return 0;
}
