#include<stdio.h>

int main()
{
	int arr[10],i;
	int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
	
	printf("Enter any ten number");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if((arr[i]%5==0) && (arr[i]%3==0))
	    {
		    printf("\nDivide by Both : %d",arr[i]);
		    cnt1++;
	    }
	    else if(arr[i]%5==0)
	    {
	    	printf("\nDivide by 5 : %d",arr[i]);
	    	cnt2++;
      	}
       	else if(arr[i]%3==0)
    	{
    		printf("\nDivide by 3 : %d",arr[i]);
    		cnt3++;
    	}
    	else
    	{
    		printf("\nNot Divisible : %d",arr[i]);
    		cnt4++;
    	}	
	}
	
	return 0;
}
