#include<stdio.h>
#define max 20
int main()
{
	int arr[max],n,i,j,k,esum=0,osum=0,earr[max],oarr[max];
	printf("\nEnter How Many Numbers You Want To Print...!");
	scanf("\n%d",&n);
	printf("\nEnter Number...!");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	printf("\n");
	for(i=0,j=0,k=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			earr[j]=arr[i];
			esum=esum+arr[i];
			j++;
		}
		if(arr[i]%2!=0)
		{
			oarr[k]=arr[i];
			osum=osum+arr[i];
			k++;
		}
	}
	printf("\nTotal Even Number : %d\n",j);
	for(i=0;i<j;i++)
	{
		printf("%d\t",earr[i]);
	}
	printf("\nTotal Odd Number : %d\n",k);
	for(i=0;i<k;i++)
	{
		printf("%d\t",oarr[i]);
	}
	printf("\nSum of Entered Even Number is : %d",esum);
	printf("\nSum of Entered Odd Number is : %d",osum);
	return 0;
}
