#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&n);
	scanf("%d",&t);
	int i;
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<t;i++)
	{
		int s,e;
		scanf("%d",&s);
		scanf("%d",&e);
		int j;
		int min = arr[s];		
		for(j=s+1;j<=e;j++)
		{
		
			if(arr[j]<min)
			min=arr[j];
		}
		printf("%d",min);
		printf("\n");		
	}
	return 0;
}
	
