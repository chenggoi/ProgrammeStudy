/*
Stack, include creat, get top, push, pop.....
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int *top;
    int *bottom;
    int StackSize;
} SqStack;

void CreatStack(SqStack &S)
{
    S.bottom = (int *)malloc(100 * sizeof(int));
    S.top = S.bottom;
    S.StackSize = 100;
    printf("Creat success!\n");
    return;
}// CreatStack

void GetTop(SqStack &S)
{
    //If the stack is not empty, print out the top element on the stack
    if(S.top == S.bottom)
    {
        printf("Stack is empty!\n");
        return;
    }

    printf("The top is %d\n", *(S.top - 1));
    return;
}// GetTop

void Push(SqStack &S)
{

    int n;
    printf("Inpute the element: ");
    scanf("%d", &n);

    if(S.top - S.bottom >= S.StackSize)
    {
        //Stack full,reallocation of the space
        S.bottom = (int *)realloc(S.bottom, (S.StackSize + 100) * sizeof(int));
        S.top = S.bottom + S.StackSize;
        S.StackSize += 100;
    }

    *S.top = n;
    S.top++;
    printf("Push Success!!\n");
    return;
}// Push

void Pop(SqStack &S)
{
    if(S.top == S.bottom) { printf("Stack is empty !\n"); }
    else
    {
        printf("%d\n", *(S.top - 1));
        S.top--;
        return;
    }
}// Pop

int main()
{
    SqStack S;

    while(1)
    {
        int n;
        printf("Inpute the number : 1.CreateStack 2.GetTop 3.Push 4.Pop....");
        scanf("%d", &n);

        if(n == 1)
        {
            CreatStack(S);
        }
        else if(n == 2)
        {
            GetTop(S);
        }
        else if(n == 3)
        {
            Push(S);
        }
        else if(n == 4)
        {
            Pop(S);
        }
        else
        {
            printf("Wrong inpute!\n");
        }
    }
}
