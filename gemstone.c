#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	int arr[27];
	for(i=0;i<27;i++)
		arr[i]=0;
	char c[100];
	//Reading first
	scanf("%s",c);
		int len = strlen(c);
		int j;
		for(j=0;j<len;j++)
		{
			char ch = c[j];
			int num = ch-97;
			arr[num]=1;
			//printf("\nFirst Number %d",num);
		}

	for(i=0;i<t-1;i++)
	{

		
		scanf("%s",c);
		 len = strlen(c);
		//printf("Input Word: %s",c);
		for(j=0;j<27;j++)
		{
			if(arr[j]==1)
			{
				//printf("\n\nIn arr[j] checking for %d",j);				
				int k;	
				int flag=0;
				for(k=0;k<len;k++)
				{
					 char ch = c[k];
					 int num = ch-97;
					 if(j==num)
					{
						//printf("In k=num %d",k);						
						flag=1;break;
					}
				}
				if(flag==0)
					arr[j]=0;
			}
		}
	}
	int count=0;
	for(i=0;i<27;i++)
	{
		if(arr[i]==1)
			count++;
	}
	printf("%d", count);
	return 0;
}
	
		
