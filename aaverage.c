#include<stdio.h>
int main()
{
	int t,i;
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,j;
		scanf("%d",&n);
		int arr[n+1];
		float ave=0;	
		long long int sum=0;
		int count=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
			sum = sum + arr[j];
		}
		ave = sum/n;
		
		for(j=0;j<n;j++)
		{
			if(arr[j]>ave)
				count++;
		}
		printf("%d",count);
		printf("\n");
	}
	return 0;
}
