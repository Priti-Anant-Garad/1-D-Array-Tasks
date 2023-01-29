#include<stdio.h>
#define max 10
int main()
{
	int arr1[max],n,i,j,k,avg,swap=0;
	printf("\nEnter How Many Number You Want To Enter...!");
	scanf("%d",&n);
	printf("\nEnter Any Numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr1[j]>arr1[j+1])
			{
				swap=arr1[j];
				arr1[j]=arr1[j+1];
				arr1[j+1]=swap;
			}
		}
	}
	printf("\nSorted Array : ");
	for(k=0;k<n;k++)
	{
		printf("%d",arr1[k]);
	}
	printf("\nSmall Number : %d",arr1[0]);
	printf("\nMaximum Number : %d",arr1[n-1]);
	avg = (arr1[0]+arr1[n-1])/2;
	printf("\nAVG : %d", avg);
	for(i=0;i<n;i++)
	{
		if(avg==arr1[i])
		{
			printf("\nAverage number found in array ");
		}
		if(arr1[i]>=avg)
		{
			printf("\nGreater Than Average : %d",arr1[i]);
		}
	}
	return 0;
}
