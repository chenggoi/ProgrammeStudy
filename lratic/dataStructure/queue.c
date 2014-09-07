/*************************************************************************
 > File Name: queue.c
 > Author: ll
 > Mail: ll0xff0@gmail.com 
 > Created Time: Sat 06 Sep 2014 01:45:44 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define ElemType int
#define OVERFLOW -1
#define OK 1
#define ERROR 0

typedef int Status;

typedef struct QNode {
	ElemType data;
	struct QNode *next;
}QNode, *QueuePtr;

typedef struct {
	QueuePtr front;			//頭指針
	QueuePtr rear;			//尾指針
}LinkQueue;

/*初始化*/
Status InitQueue (LinkQueue *Q) {
	Q->rear = (QueuePtr)malloc(sizeof(QNode));
	Q->front = Q->rear;
	if (!Q->front)			//內存分配失敗
		exit (OVERFLOW);
	(Q->front)->next = NULL;
	return OK;
}

/*銷燬*/
Status DestoryQueue (LinkQueue *Q) {
	while ((*Q).front) {
		Q->rear = (Q->front)->next;
		free (Q->front);
		Q->front = Q->rear;
	}
	return OK;
}

/*入隊*/
Status EnQueue (LinkQueue *Q, ElemType e) {
	QueuePtr p;
	
	p = (QueuePtr)malloc(sizeof(QNode));
	if (!p) 
		exit (OVERFLOW);
	p->data = e;
	p->next = NULL;
	(*Q).rear->next = p;
	(*Q).rear = p;
	return OK;
}

/*出隊*/
Status DeQueue (LinkQueue *Q) {
	QueuePtr p;

	if ((*Q).rear == (*Q).front) 
		return ERROR;
	p = (*Q).front->next;
	(*Q).front->next = p->next;
	if ((*Q).rear == p) {
		(*Q).rear == (*Q).front;
	}
	free (p);
	return OK;
}

Status Display (LinkQueue *Q) {
	QueuePtr p;

	p = Q->front->next;
	printf ("\n+++++++\n");
	while (p) {
		printf ("%d ", p->data);	
		p = p->next;
	}
	printf ("\n+++++++\n");
}

int main () {
	LinkQueue *Q = (LinkQueue *)malloc(sizeof(LinkQueue));
	int cmd;
	ElemType e;

	InitQueue (Q);
	printf ("Please input the commend what you want: \n1. 入隊; 2. 出隊; 3.展示; 4.退出 \n");
	while (scanf ("%d", &cmd) != EOF) {
		switch (cmd) {
			case 1:			//入隊
				printf ("which element you want to enqueue: \n");
				scanf ("%d", &e);
				EnQueue (Q, e);
				break;
			case 2:
				DeQueue (Q);
				break;
			case 3:
				Display (Q);
				break;
			case 4:
				goto OUT;
			default:
				printf ("Please retype the commend \n");
		}
		printf ("Please input the commend what you want: \n1. 入隊; 2. 出隊; 3.展示; 4.退出 \n");
	}
OUT:
	//DestoryQueue (Q);
	return 0;
}
