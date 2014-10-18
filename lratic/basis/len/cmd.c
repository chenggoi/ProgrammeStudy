/*************************************************************************
 > File Name: cmd.c
 > Author: ll
 > Mail: ll0xff0@gmail.com
 > Created Time: 2014年10月18日 星期六 22时35分31秒
 ************************************************************************/

#include<stdio.h>
#include"typelength.h"
int cmd(int c)
{
	switch (c)
	{
		case 0:
			return 0;
		case 1:
			typelength();
			break;
		default:
			printf("You give me a wrong command!\n");
	}
	printf("\n");
	return 1;
}
