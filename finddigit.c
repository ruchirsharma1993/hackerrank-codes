#include<stdio.h>
int main()
{
	int t;
	long long int n;
	scanf("%d",&t);
	int i;
	for(i =0 ;i<t;i++)
	{
		scanf("%lld",&n);
		long long int m=n;
		long long int count = 0;		
		while(m>0)
		{
			int temp = m%10;
			m=m/10;
			if(temp!=0)
			if(n%temp==0)
				count++;
		}
		printf("%lld",count);
		printf("\n");
	}
	return 0;
}
		
