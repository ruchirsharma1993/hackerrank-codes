#include<stdio.h>
int main() 
{
	int n,k,i,j;
	scanf("%d",&n);	
	int arr[n+1];
	scanf("%d",&k);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	//sort
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	long long int count =0;	
	int answer=0;
	for(i=0;i<n;i++)
	{
		count=count+arr[i];
		if(count>k)
			break;
		answer++;
	}
	printf("%d",answer);
	return 0;
}
