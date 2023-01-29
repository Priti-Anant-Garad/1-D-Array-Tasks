#include<stdio.h>

int main()
{
	int arr[10],i,n;
	printf("\nEnter Any 10 Number !");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter Any Number To Search In Entered List !");
	scanf("\n%d",&n);
	for(i=0;i<10;i++)
	{
		if(arr[i]==n)
    	{
	    	printf("\nElement Found !\nLocation : Pune");
	    	return 0;
	    }
	}
	printf("\nElement Not Found !");
	return 0;
}
