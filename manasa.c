#include<stdio.h>
long long int main()
{
	long long int t,n,a,b;
	scanf("%lld",&t);
	int i;
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld %lld",&n,&a,&b);
		if(a>b)
		{	int t=a;
			a=b;
			b=t;
		}
		if(a==b)
		{
			long long int t= a*(n-1) ;
			printf("%lld",t);
			printf("\n");
			continue;
		} 
		int j;
		for(j=1;j<=n;j++)
		{
			long long int t = a*(n-j) + (j-1)*b;
			printf("%lld ", t);
		}
		printf("\n");
	}
	return 0;
}
