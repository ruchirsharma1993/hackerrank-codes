#include<stdio.h>
int main()
{
	int t,i;
	long long int k;	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		long long int out=0;		
		scanf("%lld",&k);
		if(k%2==0)
		{
			out = k*k/4;
		}
		else
		{
			out = (k+1)*(k-1)/4;
		}
		printf("%lld",out);
		printf("\n");
	}
	return 0;
}
		
