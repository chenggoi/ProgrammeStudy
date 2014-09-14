/*************************************************************************
 > File Name: string.c
 > Author: ll
 > Mail: ll0xff0@gmail.com
 > Created Time: Wed 10 Sep 2014 04:47:20 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ERROR 0
#define OK 1

typedef int Status;

typedef struct {
	char *ch;
	int length;
}HString;

/*生成一个值等于chars的串T*/
Status StrAssign (HString *T, char *chars) {
	int i, length;

	length = strlen(chars);
	if (T->ch)
		free (T->ch);
	if (length == 0) {
		T->ch = NULL;
		T->length = 0;
		printf ("the string is null");
		return OK;
	}
	printf ("\n+++\n");
	T->ch = (char *)malloc(length * sizeof(char));
	if (T->ch == NULL) {
		printf ("alloc memory for the string failed.\n");
		return ERROR;
	}
	T->ch = chars;
	T->length = length;
	return OK;
}

/*返回S中元素个数*/
int StrLength (HString S) {
	return S.length;
}

/*
 *字符串大小的比较是按位比较每一个字符，而不是长度
 *对于同一位上 `b > a`
 */
int StrCompare (HString S, HString T) {
	int i;
	for (i = 0; i < S.length && i < T.length; i++) {
		if (S.ch[i] != T.ch[i])
			return S.ch[i] - T.ch[i];
	}
	return S.length - T.length;
}

/*清空S*/
Status ClearString (HString *S) {
	if (S->ch) {
		S->ch = NULL;
		free (S->ch);
	}
	S->length = 0;
	return OK;
}

/*T为S1和S2联接而成的新串*/
Status Concat (HString *T, HString S1, HString S2) {
	int i;

	if (T->ch)
		free (T->ch);
	T->ch = (char *)malloc((S1.length + S2.length) * sizeof(char));
	if (T->ch == NULL)
		return ERROR;

	T->length = S1.length + S2.length;
	for (i = 0; i < S1.length; i++)
		T->ch[i] = S1.ch[i];
	for (i = 0; i < S2.length; i++)
		T->ch[i + S1.length] = S2.ch[i];

	return OK;
}

/*SUB 为 S 从第 pos 个字符至 pos+len 的子串*/
Status SubString (HString *SUB, HString S, int pos, int len) {
	int i;

	if (pos < 1 || pos > S.length || len < 0 || S.length - pos +1 < len)
		return ERROR;
	if (SUB->ch)
		free (SUB->ch);</string.h>

	if (len == 0) {
		SUB->ch = NULL;
		SUB->length = 0;
	} else {
		SUB->ch = (char *)malloc(len * sizeof(char));
		for (i = 0; i < len; i++) {
			SUB->ch[i] = S.ch[pos + i -1];
		}
		SUB->length = len;
	}
	return OK;
}

int main () {
	int length;
	char *chars = "asdfw";
	HString S1 = {
		"abcde",
		5,
	};
	HString S2 = {
		"adwe",
		4,
	};
	HString *T = (HString *)malloc(sizeof(HString));
	HString *Sub = (HString *)malloc(sizeof(HString));

	if (StrAssign (T, chars))
		printf ("Assign string success. \n");
	else
		printf ("Assign string failure");

	printf ("The string T length is %d.\n", StrLength (*T));
	if (StrCompare (S1, S2) > 0) {
		printf ("S1 is longer than S2. \n");
	} else if (StrCompare(S1, S2)) {
		printf ("S1 is shorter than S2. \n");
	} else {
		printf ("S1 is equals to S2. \n");
	}

	ClearString (T);
	if (Concat (T, S1, S2) > 0) {
		printf ("Concat is success.\n");
	} else {
		printf ("Concat is failure. \n");
	}
	printf ("T is %s.\n", T->ch);

	SubString (Sub, *T, 3, 4);
	printf ("SubString Sub is %s. \n", Sub->ch);
	return 0;
}
