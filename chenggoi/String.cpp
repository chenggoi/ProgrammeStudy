/*
Data structure of string, include assign ,get length, compare, clear, concat, substring......
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char *ch;
    int length;
} HString;

void StrAssign(HString &T)
{
    char chars[100];
    printf("Inpute the string you want: ");
    scanf("%s", &chars);

    if(T.ch) { free(T.ch); }

    T.length = 0;
    char *c = chars;
    int i = 0;

    while(c[i] != '\0')
    {
        T.length++;
        i++;
    }

    if(T.length == 0) { T.ch = NULL; }
    else
    {
        T.ch = (char*)malloc(T.length * sizeof(char));

        for(int i = 0; i < T.length + 1; i++)
        {
            T.ch[i] = chars[i];
        }

        printf("%s\n", T.ch);
    }

    return;
}// StrAssign

void StrLength(HString S)
{
    printf("%d", S.length);
    return;
}// StrLength

void StrCompare()
{
    HString S;
    HString T;
    StrAssign(S);
    StrAssign(T);

    for(int i = 0; i < S.length || i < T.length; ++i)
    {
        if(S.ch[i] != T.ch[i])
        {
            printf("It is not same!\n");
            return;
        }
    }

    printf("It is same!!\n");
    return;
}//StrCompare

void StrClear(HString &S)
{
    if(S.ch)
    {
        free(S.ch);
        S.ch = NULL;
    }

    S.length = 0;
    return;
}//StrClear

/*
void StrConcat(HString &T, HString S, HString F)
{


    if(T.ch) { free(T.ch); }

    T.length = S.length + F.length;
    T.ch = (char*)malloc((S.length + F.length) * sizeof(char));

    for(int i = 0; i < S.length; i++)
    {
        T.ch[i] = S.ch[i];
    }

    for(int j = S.length; j < S.length + F.length; j++)
    {
        T.ch[j] = F.ch[j - S.length];
    }

    printf("%s\n", T.ch);
    return;
}//StrConcat
*/

void StrSub(HString S)
{
    int pos, len;
    printf("Input the position and the length of the substring: ");
    scanf("%d %d", &pos, &len);
    HString Sub;

    if(Sub.ch) { free(Sub.ch); }

//printf("AA");
    if(len == 0)
    {
        Sub.ch = NULL;
        Sub.length = 0;
    }

    else
    {
        Sub.ch = (char*)malloc((len + 1) * sizeof(char));

        for(int i = pos - 1; i <= len; i++)
        {
            Sub.ch[i + 1 - pos] = S.ch[i];
        }

        Sub.ch[len] = '\0';

        Sub.length = len;
    }

    printf("%s\n", Sub.ch);
    return;

}//StrSub

int main()
{
    HString T, S, F;
    int n;

    while(1)
    {
        printf("Choose the number: 1.StrAssign 2.StrLength 3.StrCompare 4.StrClear 5.StrConcat 6.StrSub :  ");
        scanf("%d", &n);

        switch(n)
        {
        case 1: StrAssign(T); break;

        case 2: StrLength(T); break;

        case 3: StrCompare(); break;

        case 4: StrClear(T); break;

        case 5:  printf("Sorry,the feature of short duration unrealized\n");//StrAssign(S); StrAssign(F); StrConcat(T,S,F); break;

        case 6: StrSub(T); break;

        default: printf("Wrong input!!\n"); break;
        }
    }
}
