#include<stdio.h>
void merge(long long int arr[],long long int low,long long int mid,long long int high)
{

	int i;
	long long int m,k,l,temp[high+low];
	l=low;
	i=low;
	m=mid+1;
	while((l<=mid)&&(m<=high))
	{
		if(arr[l]<=arr[m])
		{
			temp[i]=arr[l];
			l++;
		}
		else
		{
			temp[i]=arr[m];
			m++;
		}
		i++;
	}
	
	if(l>mid)	
	{
		for(k=m;k<=high;k++)
		{
			temp[i]=arr[k];
			i++;
		}
	}
	else
	{
		for(k=l;k<=mid;k++)
		{
			temp[i]=arr[k];
			i++;
		}
	}

	//printf("\n count is: %d",count);
	//printf("\n Array is: ");

	for(k=low;k<=high;k++)
	{
		arr[k]=temp[k];
		//printf("%d ",arr[k]);  
	}
}

void mergesort(long long int arr[],long long int start,long long int end)
{
	long long int mid = (start+end)/2;
	
	//Calling merge functions	
	if(start<end)
	{
		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
	//else
		//printf("Start not less then end");


}	
int val(long long int a, long long int b)
{
	if(a>b)
		return a-b;
	else
		return b-a;
}

int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		int n;
		
		scanf("%d",&n);

		long long int hole[n+1];
		long long int mouse[n+1];
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&mouse[i]);
		}

		for(i=0;i<n;i++)
		{
			scanf("%lld",&hole[i]);
		}

		mergesort(mouse,0,n-1);
		mergesort(hole,0,n-1);

		long long int max = val(mouse[0],hole[0]);
		for(i=1;i<n;i++)
		{
			if(val(mouse[i],hole[i])>max)	
				max = val(mouse[i],hole[i]);
		}
		printf("%lld",max);
		printf("\n");
	}
	return 0;
}
