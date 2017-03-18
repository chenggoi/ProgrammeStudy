/*
InsertSort O(n)->O(n2)
*/
#include<stdio.h>
#include<stdlib.h>

void InsertSort(int *a,int n)
{
    int i,j;
    for(i=2;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            a[0]=a[i];
            a[i]=a[i-1];
            for(j=i-2;a[0]<a[j];j--)
            {
                a[j+1]=a[j];
            }
            a[j+1]=a[0];
        }
    }
}

int main()
{

    int n,*a=0,i;
    printf("Inpute the number n:")
    scanf("%d",&n);
    a=(int*)malloc((n+1)*sizeof(int));
    printf("Inpute the list:")
    for(i=1;i<n+1;i++)
    {
        scanf("%d",&a[i]);
    }
    InsertSort(a,n+1);
    printf("The result is ")
    for(i=1;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
