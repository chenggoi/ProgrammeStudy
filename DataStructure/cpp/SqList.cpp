/*
Sequence structure of linear table, include creat,insert,delete,merge...
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int *elem;  //Storage space base
	int length; //Current length
	int listsize; //Allocation of space
} SqList;

void SqCreat(SqList &L)
{
	//Constructs an empty linear list
	L.elem = (int *)malloc(100 * sizeof(int));
	L.length = 0;
	L.listsize = 100;
	return;
}// SqCreat

void SqShow(SqList &L)
{
	for(int i = 0; i < L.length; i++)
	{
		printf("%d ", L.elem[i]);
	}

	printf("\n");
}// SqShow

void SqIns(SqList &L)
{
	//Inserts an element
	int n, element;
	printf("The position of the insertion: ");
	scanf("%d", &n);
	printf("The inserted element: ");
	scanf("%d", &element);

	if(n > L.length + 1)
	{
		printf("Wrong Position!!\n");
		return;
	}
	else
	{
		n = n - 1;

		for(int i = L.length ; i > n; i--)
		{
			L.elem[i] = L.elem[i - 1];
		}

		L.length++;
		L.elem[n] = element;
		printf("Insert Success !!\n");
		return;
	}
}// SqIns

void SqDel(SqList &L)
{
	//Delete an element
	int n;
	printf("The position of the deletion: ");
	scanf("%d", &n);

	if(n < 1 || n > L.length)
	{
		printf("Wrong Position!");
	}
	else
	{
		printf("%d has been deleted.\n", L.elem[n - 1]);

		for(int i = n - 1; i < L.length; i++)
		{
			L.elem[i] = L.elem[i + 1];
		}

		L.length--;
	}

	return;
}// SqDel

void SqMerge(SqList La, SqList Lb, SqList &L)
{
	//Merge both of La && Lb into L
	L.listsize = L.length = La.length + Lb.length;
	L.elem = (int *)malloc(L.listsize * sizeof(int));

	for(int i = 0; i < La.length ; i++)
	{
		L.elem[i] = La.elem[i];
	}

	for(int i = La.length; i < L.length; i++)
	{
		L.elem[i] = Lb.elem[i - La.length];
	}

	return;
}// SqMerge

int main()
{
	SqList La;
	SqList Lb;
	SqList L;
	int n;

	while(1)
	{
		printf("Choose the number of the function: 1.SqCreat 2.SqInsert 3.SqDelete 4.SqMerge 5.SqShow.....\n");
		scanf("%d", &n);

		if(n == 1)
		{
			SqCreat(La);
			SqCreat(Lb);
			SqCreat(L);
		}
		else if(n == 2)
		{
			printf("La:\n");
			SqIns(La);
			printf("Lb:\n");
			SqIns(Lb);
		}
		else if(n == 3)
		{
			SqDel(La);
		}
		else if(n == 4)
		{
			SqMerge(La, Lb, L);
		}
		else if(n == 5)
		{
			printf("La:\n");
			SqShow(La);
			printf("Lb:\n");
			SqShow(Lb);
			printf("L:\n");
			SqShow(L);
		}
		else
		{
			printf("Wrong Input!\n");
		}
	}
}
