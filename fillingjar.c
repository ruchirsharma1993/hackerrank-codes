#include<stdio.h>
int main()
{
	long long int n,m;
	scanf("%lld %lld",&n,&m);
	int i;
	long long int count=0;	
	for(i=0;i<m;i++)
	{
		long long int a,b,k;
		scanf("%lld %lld %lld",&a,&b,&k);
		count+=(b-a+1)*k;
	}
	
	count=count/n;
	printf("%lld",count);
	return 0;
}
		
