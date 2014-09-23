/*************************************************************************
 > File Name: biTree.c
 > Author: ll
 > Mail: ll0xff0@gmail.com
 > Created Time: Tue 23 Sep 2014 07:48:55 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef int DataType;

typedef struct BiTree
{
	DataType data;
	struct BiTree *Tleft;
	struct BiTree *Tright;
} *BTree;

BTree CreateTree(); //新建
BTree Insert(BTree root, DataType data); //插入
void InBTree(BTree root); //中序遍历
void PreBTree(BTree root); //前序遍历
void PostBTree(BTree root); //后序遍历
BTree findPostion(BTree root, int deleteNode, int *flag); //寻找合适的插入点
BTree delNode(BTree root, BTree parent, int flag); //删除树节点

int main ()
{
	BTree root = NULL;
	root = CreateTree();
	InBTree(root);
	printf("\n");
	PreBTree(root);
	printf("\n");
	PostBTree(root);
	printf("\n");
}

BTree CreateTree()
{
	BTree root = NULL;
	DataType temp = -1;
	printf("Please input the node and end of -1: \n");
	while (scanf("%d", &temp) && temp != -1)
	{
		root = Insert(root, temp);
	}

	return root;
}

/*
 *按照左中右从小到大的顺序插入
 */
BTree Insert(BTree root, DataType data)
{
	BTree ptr = root;
	BTree tempNode;
	BTree newNode = (BTree)malloc(sizeof(struct BiTree));
	newNode->data = data;
	newNode->Tleft = NULL;
	newNode->Tright = NULL;

	if (ptr == NULL)
	{
		return newNode;
	}
	else
	{
		while (ptr != NULL)
		{
			tempNode = ptr;
			if (ptr->data >= data)
			{
				ptr = ptr->Tleft;
			}
			else
			{
				ptr = ptr->Tright;
			}
		}

		if (tempNode->data >= data)
		{
			tempNode->Tleft = newNode;
		}
		else
		{
			tempNode->Tright = newNode;
		}
	}
	return root;
}

/*
 *返回要删除节点的父节点
 *当删除节点在其父节点左边时候 flag = -1
 *删除节点未找到，flag = 0
 *删除节点等于根节点，flag = 0
 */
BTree findPostion(BTree root, int deleteNode, int *flag)
{
	BTree parentNode = root;
	BTree temp = root;
	*flag = 0;

	while (temp != NULL)
	{
		if (temp->data == deleteNode)
		{
			return parentNode;
		}
		else
		{
			parentNode = temp;
			if (temp->data > deleteNode)
			{
				temp = temp->Tleft;
				*flag = -1;
			}
			else
			{
				temp = temp->Tright;
				*flag = 1;
			}
		}
	}
	return NULL;
}

/*
 *输入为根节点，要删除节点
 *返回删除后节点之后的根节点
 */
BTree delNode(BTree root, BTree parent, int flag)
{
	BTree deleteNode = NULL;

	if (parent == NULL)
	{
		printf("Nothing to delete.\n");
		return root;
	}

	/*
	 * 找出删除节点
	 */
	switch (flag)
	{
	case -1:
		deleteNode = parent->Tleft;
		break;
	case 0:
		deleteNode = NULL;
		break;
	case 1:
		deleteNode = parent->Tright;
		break;
	default:
		printf ("ERROR\n");
		exit(-1);
	}

	/*删除节点*/
	if (deleteNode->Tleft == NULL && deleteNode->Tright == NULL)
	{
		if (parent->Tleft == deleteNode)
		{
			parent->Tleft = NULL;
		}
		else if (parent->Tright == deleteNode)
		{
			parent->Tright = NULL;
		}
		else
		{
			parent = NULL;
		}
		free(deleteNode);
	}
	else if (deleteNode->Tleft != NULL && deleteNode->Tright == NULL)
	{
		if (deleteNode->data == root->data)
		{
			root = deleteNode->Tright;
		}
		else
		{
			if (parent->Tleft == deleteNode)
				parent->Tleft = deleteNode->Tleft;
			else
				parent->Tright = deleteNode->Tleft;
		}
		free (deleteNode);
	}
	else if (deleteNode == NULL && deleteNode->Tright != NULL)
	{
		if (deleteNode->data == root->data)
		{
			root = deleteNode->Tleft;
		}
		else
		{
			if (parent->Tleft == deleteNode)
				parent->Tleft = deleteNode->Tright;
			else
				parent->Tright = deleteNode->Tright;
		}
		free(deleteNode);
	}
	else
	{
		BTree temp = deleteNode->Tleft;
		BTree tempParent = deleteNode;
		while (temp->Tright != NULL)
		{
			tempParent = temp;
			temp = temp->Tright;
		}
		deleteNode->data = temp->data;
		tempParent->Tright = temp->Tleft;
		printf ("temp = %d \n", temp->data);
		free (temp);
	}
}

/*中序遍历*/
void InBTree(BTree root)
{
	if (root != NULL)
	{
		InBTree(root->Tleft);
		printf("%d ", root->data);
		InBTree(root->Tright);
	}
}

/*先序遍历*/
void PreBTree(BTree root)
{
	if (root != NULL){
		printf("%d ", root->data);
		PreBTree(root->Tleft);
		PreBTree(root->Tright);
	}
}

/*后序遍历*/
void PostBTree(BTree root) {
	if (root != NULL){
		PostBTree(root->Tleft);
		PostBTree(root->Tright);
		printf("%d ", root->data);
	}
}
