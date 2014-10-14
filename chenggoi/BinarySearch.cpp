/*
O(logn)
*/
#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int *a,int n,int high)
{
	int mid,low=0;
	while(low<high)
	{

		mid=(low+high)/2;
		if(a[mid]==n)
		{
			return mid;
		}
		else if(a[mid]<n)
		{
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main(){
	int a[10];
	int n;
	printf("Input 10 number: ");
	for(int i=0;i<10;i++)
	{

		scanf("%d",&a[i]);

	}
	printf("Inpute the number what you want: ");
	scanf("%d",&n);
	printf("Result:%d\n",BinarySearch(a,n,10)+1);
}
