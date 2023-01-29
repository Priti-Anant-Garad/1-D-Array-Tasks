#include<stdio.h>
#define max 20
int main()
{
	int arr[max],n,i;
	printf("\nEnter How Many Numbers You Want To Print...!");
	scanf("\n%d",&n);
	printf("\nEnter Number...!");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
