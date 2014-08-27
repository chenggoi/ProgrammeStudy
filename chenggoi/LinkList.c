/*
Linklist, include creat, search, insert, delete,display
*/

#include"stdio.h"
#include"stdlib.h"

typedef struct LNode{
	int data;
	struct LNode* next;
}*LinkList,LNode;

LinkList LinkSearch(LinkList L){
	int n;
	printf("Input the position: ");
	scanf("%d",&n);
	LinkList p;
	p=L->next;
	while(n--){
		p=p->next;
	}
	printf("Result: %d",p->data);
	return p;
}// LinkSearch

void LinkInsert(LinkList &L){
	LinkList p,q;
	p=(LinkList)malloc(sizeof(LNode));
	q=(LinkList)malloc(sizeof(LNode));
	printf("Inpute the inserted element: ");
	scanf("%d",&p->data);
	q=LinkSearch(L);
	p->next=q->next;
	q->next=p;
}// LinkInsert

void LinkDelete(LinkList &L){

}
