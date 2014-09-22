/*************************************************************************
  > File Name: bubbleSort.c
  > Author: ll
  > Mail: ll0xff0@gmail.com
  > Created Time: Mon 22 Sep 2014 10:37:59 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100

/*
 * a为字符串
 * n为字符串长度
 */
void BubbleSort(int a[], int n)
{
	int i, j;
	int temp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j ++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	int i, n;
	int a[MAXSIZE];

	printf("Enter the length of Interger string: \n");
	scanf("%d", &n);
	printf("Enter the Interger string: \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	BubbleSort(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
