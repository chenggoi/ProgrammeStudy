/*************************************************************************
 > File Name: main.c
 > Author: ll
 > Mail: ll0xff0@gmail.com
 > Created Time: 2014年10月18日 星期六 22时27分38秒
 ************************************************************************/

#include<stdio.h>
#include"cmd.h"

int main ()
{
	int cc;
	while (scanf("%d", &cc) != EOF)
	{
		if (cmd(cc) == 0) {
			break;
		}
	}
	return 0;
}
