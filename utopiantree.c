#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;	
	for(i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		int count=1;
		int flag = 0;
		int j;
		for(j=1;j<=n;j++)
		{
			if(flag==0)
			{	
				count=count+count;
				flag=1;			
			}
			else
			{
				count=count+1;
				flag=0;
			}
		
			
		}
		printf("%d",count);
		printf("\n");
	}
	return 0;
}
