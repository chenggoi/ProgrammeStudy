/*
Binary tree data structure,include create,preorder traversal and record the maximum and minimum values
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct BiNode
{
    int data; // the value of nodes
    struct BiNode *lchild, *rchild; // left and right child pointers
}*BiTree;


void CreatBiTree(BiTree &root)
{
    char number;
    scanf("%s", &number); // input the value of nodes

    if(number == '*') { root = NULL; }
    else
    {
        root = (BiTree)malloc(sizeof(BiNode)); // create root node
        root->data = number - '0';

        CreatBiTree(root->lchild); // the recursive structure of left sub tree
        CreatBiTree(root->rchild); // the recursive structure of right sub tree
    }
}

void PreTraverse(BiTree root, int &max, int &min)   //Traversal before the two fork tree
{

    if(root != NULL)
    {
        if((root->data) > max) { max = root->data; }
        else if(root->data < min) { min = root->data; }

        printf("data: %d\n", root->data);
        PreTraverse(root->lchild, max, min);
        PreTraverse(root->rchild, max, min);
    }

    return;
}

int main()
{
    int max, min;
    BiTree root;
    root = NULL;
    printf("According to the pre order traversal input the tree ,'*' is blank node,such as 1 2 4 * * 5 * * 3 6 * * *\n");
    CreatBiTree(root);//According to the pre order traversal input the tree ,"*" is blank node,such as "1 2 4 * * 5 * * 3 6 * * *"
    max = root->data;
    min = root->data;
    PreTraverse(root, max, min);
    int n;
    n = max - min;
    printf("n: %d\n", n);
}
