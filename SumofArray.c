#include<stdio.h>
#define max 20
int main()
{
	int arr[max],n,i,sum=0;
	printf("\nEnter How Many Numbers You Want To Print...!");
	scanf("\n%d",&n);
	printf("\nEnter Number...!");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nSum of Entered Number is : %d",sum);
	return 0;
}
