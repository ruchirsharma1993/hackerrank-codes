#include<stdio.h>
int main()
{
	int t,n,c,m,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d",&n,&c,&m);
		int count = n/c;
		int temp = count;
		while(temp>=m)
		{
			temp = temp-m;	
			count++;
			temp++;	
		}
		printf("%d",count);

		printf("\n");
	}
	return 0;
}
