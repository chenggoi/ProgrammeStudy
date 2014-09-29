/*************************************************************************
 > File Name: dlinkList.c
 > Author: ll
 > Mail: ll0xff0@gmail.com
 > Created Time: Mon 29 Sep 2014 11:04:59 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define ElemType int

typedef struct DLNode
{
	ElemType data;
	struct DLNode *pre;
	struct DLNode *next;
} DLNode, *DLinkList;

/*初始化链表*/
DLinkList Initlist(int len)
{
	int i;
	DLinkList head, p, q;
	head = (DLinkList)malloc(sizeof(DLNode));
	head->pre = NULL;
	p = head;

	printf ("Please enter a value of each node: \n");
	for (i = 0; i < len; i++)
	{
		q = (DLinkList)malloc(sizeof(DLNode));
		scanf ("%d", &q->data);
		q->next = NULL;
		q->pre = p;
		p->next = q;
		p = q;
	}
	return head;
}

/*
 * 插入操作
 * 传入参数为 链表   插入位置（第 po 元素之后）   插入的值
 * 0 为第一个元素
 */
void Insert(DLinkList L, int po, ElemType e)
{
	DLinkList p, q, in;
	int i = 0;

	in = (DLinkList)malloc(sizeof(DLNode));
	in->data = e;
	p = L;
	q = L->next;
	if (po == 0)
	{
		p->next = in;
		q->pre = in;
		in->pre = p;
		in->next = q;
		return;
	}
	for (i = 0; i != po && q->next != NULL; i++)
	{
		p = q;
		q = p->next;
	}
	if (i == po)
	{
		p-> next = in;
		q->pre = in;
		in->pre = p;
		in->next = q;
	}
	else if (i < po)
	{
		q->next = in;
		in->pre = q;
		in->next = NULL;
	}
}
/*
 * 删除节点，po为被删除节点位置
 */
void Delete(DLinkList L, int po)
{
	DLinkList p;
	int i = 0;

	p = L;
	for (i = 0; i != po && p->next != NULL; i++)
	{
		p = p->next;
	}
	p->pre->next = p->next;
	p->next->pre = p->pre;
	free(p);
}

/*
 * direction = 1;逆序遍历输出
 * 默认顺序输出
 */
void Display(DLinkList L, int direction)
{
	DLinkList p = L->next;
	DLinkList q = L->next;
	printf ("\nThe list of elements are: \n++++++++++\n");
	switch (direction)
	{
	case 1:
		while (q->next != NULL)
		{
			q = q->next;
		}
		while (q->pre != NULL)
		{
			printf ("%d ", q->data);
			q = q->pre;
		}
		break;
	default:
		while (p != NULL)
		{
			printf ("%d ", p->data);
			p = p->next;
		}
	}
	printf ("\n++++++++++\n");
}

void FreeAll(DLinkList L)
{
	DLinkList temp;
	if (L->next != NULL)
	{
		temp = L;
		free (temp);
		L = L->next;
	}
	free (L);
}
int main()
{
	int len, inn, nde;
	ElemType ine;
	DLinkList dl;

	printf ("Input the size of this DLinkList : \n");
	scanf ("%d", &len);
	dl = Initlist(len);
	Display(dl, 0);
	printf ("Input the position and value of the insert element: \n");
	scanf ("%d %d", &inn, &ine);
	Insert(dl, inn, ine);
	Display(dl, 0);
	printf ("Input position of the element you want to delete: \n");
	scanf ("%d", &nde);
	Delete(dl, nde);
	Display(dl, 0);
	FreeAll(dl);
}
