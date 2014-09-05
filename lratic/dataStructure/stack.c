/*************************************************************************
 > File Name: stack.c
 > Author: ll
 > Mail: ll0xff0@gmail.com 
 > Created Time: Fri 05 Sep 2014 03:56:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define STACK_INIT_SIZE 10
#define STACK_INCREMENT 2
#define ERROR -1

typedef int ElemType;

typedef struct SqStack {
	ElemType *base;
	ElemType *top;
	int stackSize;
} SqStack;

void Display (SqStack *S) {
	ElemType *elem = S->base;
	if (S->base == S->top) {
		printf ("This is an empty stack! \n");
		return;
	}
	printf ("Elements are \n+++++++\n");
	for (elem; elem != S->top; elem++) {
		printf ("%d ", *elem);
	}
	printf ("\n+++++++\n");
}

SqStack* InitStack (SqStack *S) {
	S = (SqStack *)malloc(sizeof(SqStack));
	if (!S) {
		S->base = (ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType));
		S->top = S->base;
		S->stackSize = STACK_INIT_SIZE;
		printf ("Init Successfully!");
	}
	return S;
}

void Free (SqStack *S) {
	if (!S) {
		return;
	} else {
		free (S->base);
		free (S);
	}
}

void Push (SqStack *S, ElemType e) {
	if (S->top - S->base >= S->stackSize) {
		S->base = (ElemType *)realloc(S->base, (S->stackSize + STACK_INCREMENT) * sizeof(ElemType));
		if (!S->base) {
			printf ("Relloc filed \n");
			exit (ERROR);
		}
		S->top = S->base + S->stackSize;
		S->stackSize += STACK_INCREMENT;
	}
	*(S->top) = e;
	S->top ++;
}

void Pop (SqStack *S) {
	if (S->top == S->base) {
		printf ("The Stack is Empty. \n");
		return;
	}
	(S->top) --;
}

int main () {
	SqStack *S;
	int cmd;
	int num;

	S = InitStack(S);
	printf ("1.push; 2.Pop; 3.Display; 4.OUT \n");
	while (scanf("%d", &cmd) != EOF) {
		switch (cmd) {
			case 1:
				printf ("Input an element you want to push: \n");
				scanf ("%d", &num);
				Push (S, num);
				break;
			case 2:
				Pop (S);
				break;
			case 3:
				Display (S);
				break;
			case 4:
				goto OUT;
			default:
				printf ("Please retype the commend \n");
		}
		printf ("1.push; 2.Pop; 3.Display; 4.OUT \n");
	}
OUT:
	Free (S);
	printf ("It's OK~ \n");
	return 0;
}
