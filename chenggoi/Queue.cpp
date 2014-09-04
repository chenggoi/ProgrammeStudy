/*
Data structure of linked queue, include create,insert,delete...
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct QNode
{
    int data;
    struct QNode *next;
} QNode, *QueuePtr;

typedef struct
{
    QueuePtr front; //Queue front pointer
    QueuePtr rear; //Queue rear pointer
} LinkQueue;

void QueueCreate(LinkQueue &Q)
{
    Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
    Q.front->next = NULL;
    return;
}//QueueCreate

void QueueInsert(LinkQueue &Q)
{
    printf("Input the element: ");
    int n;
    scanf("%d", &n);
    QueuePtr p;
    p = (QueuePtr)malloc(sizeof(QNode));
    p->data = n;
    p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
    return;
}//QueueInsert

void QueueDelete(LinkQueue &Q)
{
    if(Q.rear == Q.front) { printf("ERROR!\n"); }
    else
    {
        QueuePtr p;
        p = Q.front->next;
        printf("Delete %d !\n", p->data);
        Q.front->next = p->next;

        if(Q.rear == p) { Q.rear = Q.front; }

        free(p);
    }

    return;
}//QueueDeleteQueueDelete

int main()
{
    LinkQueue Q;
    QueueCreate(Q);

    while(1)
    {
        printf("Input the number : 1.Insert 2.Delete.....\n");
        int n;
        scanf("%d", &n);

        switch(n)
        {
        case 1: QueueInsert(Q);  break;

        case 2: QueueDelete(Q);  break;

        default: printf("Wrong input!!\n");
        }
    }

}
