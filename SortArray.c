#include<stdio.h>
#define max 10
int main()
{
	int arr1[max],i,j,k,n,swap=0;
	printf("\nEnter How Many Number You Want To Sort...!");
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
	
	return 0;
}
