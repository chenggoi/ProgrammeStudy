/*
Quick Sort,O(n2)-->O(nlogn)
*/

#include<stdio.h>
#include<stdlib.h>


void QuickSort(int *a, int low, int high)
{
    int tmp = low, t;

    if(low < high)
    {
        int r = a[high], i;

        for(i = low; i < high; i++)
        {
            if(a[i] < r)
            {

                t = a[i];
                a[i] = a[low];
                a[low] = t;
                low++;
            }
        }

        t = a[low];
        a[low] = a[high];
        a[high] = t;

        QuickSort(a, tmp, low - 1);
        QuickSort(a, low + 1, high);
    }

}

int main()
{
    int *a, n, i;

    printf("Inpute the count of the number:");
    while(scanf("%d", &n) != EOF)
    {

        a = (int*)malloc(n * sizeof(int));

        printf("Inpute the numbers:");
        for(i = 0; i < n; i++)
        {
            scanf("%d", a + i);
        }

        QuickSort(a, 0, n - 1);

        printf("The result of the QuickSort:");
        for(i = 0; i < n; i++)
        {
            printf("%d ", *(a + i));
        }
        printf("\n");
        printf("Inpute the count of the number:");
    }
}

