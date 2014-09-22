/*************************************************************************
 > File Name: fibonacci.c
 > Author: ll
 > Mail: ll0xff0@gmail.com
 > Created Time: Tue 23 Sep 2014 07:02:35 AM CST
 ************************************************************************/

#include<stdio.h>

int Fibonicca(int n)
{
	int sum = 0;

	if (n == 0)
	{
		sum = 0;
	}
	else if (n == 1)
	{
		sum = 1;
	}
	else
	{
		sum = Fibonicca(n - 2) + Fibonicca(n - 1);
	}
	return sum;
}

int main ()
{
	printf("%d \n", Fibonicca(10));
}
