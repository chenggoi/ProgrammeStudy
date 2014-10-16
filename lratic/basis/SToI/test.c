/*************************************************************************
 > File Name: test.c
 > Author: ll
 > Mail: ll0xff0@gmail.com 
 > Created Time: 2014年10月15日 星期三 00时34分12秒
 ************************************************************************/

#include<stdio.h>

int main() {
	char *b = "12dfd";
	int len = sizeof(*b)/sizeof(char);
	printf("%d\n", len);
	return 0;
}
