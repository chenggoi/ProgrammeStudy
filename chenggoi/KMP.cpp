/*
KMP: string matching algorithms,O(m+n)
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int KMP(char *orginal,char *find)
{
    if(orginal == NULL || find == NULL) return -2;
    int olen = strlen(orginal);
    int flen = strlen(find);
    char *next = (char*)malloc(sizeof(char)*(flen+1));
    next[0] = 0;
    int j = 0,i;
    for(i = 1;i < flen;i++)
    {
        while(find[i] != find[j] && j > 0) j = next[j];
        if(find[j] == find[i]) j++;
        next[i] = j;
    }
    for(i = 0,j = 0;i < olen;i++)
    {
        if(j == flen) return i-j+1;
        if(orginal[i] != find[j])
        {
            if(j != 0)
            {
                i = i - next[j-1]-1;
                j=0;
            }
            continue;
        }
        j++;
    }
    return -1;
}
int main()
{
    while(1)
    {
        char orginal[100],find[100];
        printf("Please inpute the orginal string: ");
        scanf("%s",orginal);
        printf("Please inpute the find string: ");
        scanf("%s",find);
        printf("Result: %d\n",KMP(orginal,find));
    }
}
