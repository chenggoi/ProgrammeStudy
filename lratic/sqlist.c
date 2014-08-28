/*************************************************************************
    > File Name: sqlist.c
    > Author: ll
    > Mail: ll0xff0@gmail.com 
    > Created Time: Thu 28 Aug 2014 02:29:45 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define ElemType int
#define Status int

typedef struct {
	ElemType *elem;
	int length;
	int listsize;
} SqList;

Status InitList(SqList *L) {
	L->elem = (ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if (!L->elem)
		return 0;
	L->length = 0;
	L->listsize = LIST_INIT_SIZE;
	return 1;
}

Status ListInsert(SqList *L, int i, ElemType e) {
	int *p, *q;
	if (i < 1 || i > L->length) {
		printf ("Insertion Position Error");
		return 0;
	}
	if (L->length > L->listsize) {
		ElemType *newbase = (ElemType*)realloc(L->elem, (LIST_INIT_SIZE + LISTINCREMENT)*sizeof(ElemType));
		if (! newbase) {
			return 0;
		}
		L->elem = newbase;
		L->listsize += (LISTINCREMENT);
	}

	q = &(L->elem[i-1]);
	for (p = &(L->elem[L->length - 1]);p >= q; --p) {
		*(p+1) = *p;
	}

	*q = e;
	L->length ++;
	return 1;
}

Status ListDelete(SqList *L, int i) {
	ElemType *p, *q;
	if (i < 1 || i > L->length) {
		printf ("Delete Position Error");
		return 0;
	}
	p = &(L->elem[i-1]);
	q = L->elem + L->length -1;	//L->elem pointed to the first element
	for (++p; p <= q; ++p) {
		*(p - 1) = *p;
		L->length --;
		return 1;
	}
}

void Display(SqList *L) {
	int i = 0;
	printf("\n++++++++++++++++\n");
	printf ("The sqlist is： \n");
	for (i = 0; i < L->length; ++i) {
		printf("%d ",L->elem[i]);
	}
	printf("\n++++++++++++++++\n\n");
}

int main() {
	int i, j, e, lo, temp;
	SqList *L = (SqList*)malloc(sizeof(SqList));
	InitList(L);
	printf("Please input the length of the sqlist: \n");
	scanf("%d", &L->length);
	printf("Please input every elems in the sqlist: \n");
	for (i = 0; i < L->length; ++i) {
		scanf("%d", &L->elem[i]);
	}
	Display(L);
	printf("Please input the insertion position and the elem: \n");
	scanf("%d%d", &j, &e);
	ListInsert(L, j, e);
	Display(L);
	printf("Please input the location to be deleted: \n");
	scanf("%d", &lo);
	ListDelete(L, lo);
	Display(L);
	free(L);
	return 0;
}
