/*************************************************************************
 > File Name: quickSort.c
 > Author: ll
 > Mail: ll0xff0@gmail.com
 > Created Time: Thu 25 Sep 2014 11:33:14 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAXSIZE 100

void QuickSort (int *a, int left, int right)
{
	int pivot, i, j, key, temp;
	i = left;
	j = right;
	key = (i + j) / 2;
	pivot = a[key];

	while (i < j)
	{
		if (a[i] < pivot)
		{
			i++;
		}
		if (a[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < right)
	{
		QuickSort(a, i, right);
	}
	if (j > left)
	{
		QuickSort(a, left, j);
	}
}

int main ()
{
	int a[MAXSIZE] = {15, 2, 5, 6, 3, 10, 22};
	QuickSort (a, 0, 6);
	int i;
	for (i = 0; i < 7; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
