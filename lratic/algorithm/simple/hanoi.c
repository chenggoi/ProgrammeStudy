/*************************************************************************
 > File Name: hanoi.c
 > Author: ll
 > Mail: ll0xff0@gmail.com
 > Created Time: Tue 23 Sep 2014 07:16:12 AM CST
 ************************************************************************/

#include<stdio.h>

int count = 0;

void move(char a, char b)
{
	printf("%c > %c\n", a, b);
}

void hanoi(int n, char x, char y , char z)
{
	count++;
	if (n == 1)
	{
		move(x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		move(x, z);
		hanoi(n - 1, y, x, z);
	}
}

int main()
{
	int n = 3;
	hanoi(n, 'x', 'y', 'z');
	printf("%d\n", count);
	return 0;
}
