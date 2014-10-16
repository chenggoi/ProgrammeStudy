/*************************************************************************
 > File Name: main.c
 > Author: ll
 > Mail: ll0xff0@gmail.com
 > Created Time: 2014年10月16日 星期四 09时52分03秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	printf("int    :%lu\n", sizeof(int));
	printf("long   :%lu\n", sizeof(long));
	printf("char   :%lu\n", sizeof(char));
	printf("short  :%lu\n", sizeof(short));
	printf("double :%lu\n", sizeof(double));
	printf("float  :%lu\n", sizeof(float));

	printf("unsigned int  :%lu\n", sizeof(unsigned int));
	printf("unsigned long :%lu\n", sizeof(unsigned long));
	printf("unsigned short :%lu\n", sizeof(unsigned short));

	printf("int *    :%lu\n", sizeof(int *));
	printf("char *   :%lu\n", sizeof(char *));
	printf("short *  :%lu\n", sizeof(short *));
	printf("long *   :%lu\n", sizeof(long *));
	printf("double * :%lu\n", sizeof(double *));
	printf("float *  :%lu\n", sizeof(float *));
}
