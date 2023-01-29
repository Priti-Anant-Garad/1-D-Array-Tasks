#include<stdio.h>
#define max 20

int main()
{
	int arr[max],n,i,j,count=0,flag;
	printf("\nEnter Array Length : ");
	scanf("\n%d",&n);
	printf("\nEnter Array Numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		flag=1;
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1 && arr[i]>=2)
		{
			count=count+1;
			printf("%d",arr[i]);
		}
	}
	printf("\nTotal Prime Number Count is : %d",count);
	
	return 0;
}
