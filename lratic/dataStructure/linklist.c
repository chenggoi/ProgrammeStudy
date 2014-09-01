/*************************************************************************
    > File Name: linklist.c
    > Author: ll
    > Mail: ll0xff0@gmail.com 
    > Created Time: Fri 29 Aug 2014 09:21:17 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define ElemType int

typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

LinkList InitList(int len) {
	int i;
	LinkList head, p, q;
	head = (LinkList)malloc(sizeof(LNode));
	p = head;

	printf ("Please enter a value for each node: \n");
	for (i = 0; i < len; i++) {
		q = (LinkList)malloc(sizeof(LNode));
		scanf ("%d", &q->data);
		q->next = NULL;
		p->next = q;
		p = q;
	}
	return head;
}

void Display (LinkList L) {
	printf ("\nThe list of elements are: \n++++++++\n");
	LinkList l;
	l = L->next;
	while (l != NULL) {
		printf ("%d ", l->data);
		l = l->next;
	}
	printf ("\n++++++++");
	printf ("\n");
}

int main () {
	int len;
	LinkList link;

	printf ("Please input the size for this LinkList: \n");
	scanf ("%d", &len);
	link = InitList(len);
	Display(link);
}
