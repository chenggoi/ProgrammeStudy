/*
Linklist, include creat, search, insert, delete,display
*/

#include<stdio.h>
#include<stdlib.h>

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
	p->next=NULL;
	q->next=NULL;
	printf("Inpute the inserted element: ");
	scanf("%d",&p->data);
	q=LinkSearch(L);
	p->next=q->next;
	q->next=p;
}// LinkInsert

void LinkDelete(LinkList &L){
    LinkList p,q;
	p=(LinkL&ist)malloc(sizeof(LNode));
	q=(LinkList)malloc(sizeof(LNode));
	int n;
	printf("Input the position: ");
	scanf("%d",&n);
	n--;
	p=L->next;
	while(n--){
		p=p->next;
	}
	printf("Result: %d is Deleted...",p->next->data);
	q=p->next;
	p->next=q->next;
	free(q);
}// LinkDelete

void LinkDisplay(LinkList L){
	L=L->next;
	while(L!=NULL){
		printf("%d ",L->data);
		L=L->next;
	}
	return;
}

int main()
{
	LinkList L,p;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	while(1){
		printf("Choose the number: 1.Insert 2.Search 3.Delete 4.Display......");
		int n;
		scanf("%d",&n);
		if(n==1){
			LinkInsert(L);
		}
		else if(n==2){
			p=LinkSearch(L);
		}
		else if(n==3){
			LinkDelete(L);
		}
		else if(n==4){
			LinkDisplay(L);
		}
		else {
			printf("Wrong Input!!!");
		}
	}

}
