#include<stdio.h>

int main()
{
	int n,k,i,j;
	scanf("%d",&n);
	long long int arr[n+1];
	
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}	
	//Find min and kth min
	

	for(i=0;i<n;i++)
	{	
		//if(i==k)
		//	break;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				long long int temp = arr[i];	
				arr[i] = arr[j];
				arr[j] = temp;
			}	

		}
	}
	
	long long int count = arr[k-1] - arr[0];
	//printf("Sorted Array");
	for(i=n;i>k;i--)
	{
		long long int tcount = arr[i] - arr[i-k+1];
		//printf("%lld : ",tcount);
		if((tcount<count)&&(tcount>=0))
			count=tcount;		
	}
	
	printf("%lld",count);
	return 0;
}
