#include<stdio.h>
int main()
{
	int t,n;
	int i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		if((n==1)||(n==2)||(n==4)||(n==7)||(n<=0))
			printf("-1");		
		else if(n%3==0)
		{
			while(n--){printf("5");}
		}
		else if(n==5)
		{	printf("33333");
		}	
		else
		{
			int count = n;
			/*while(count%5!=0)
			{
				count=count-3;
				printf("555");
			}
			while(count--)	
				printf("3");
			*/
			while(count%3!=0)
			{
				count=count-5;
			}
			int j;
			for(j=0;j<count;j++)
				printf("5");
			for(j=count;j<n;j++)
				printf("3");
		
		}
		printf("\n");
	}
	return 0;
}
				
			
		
