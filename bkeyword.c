#include<stdio.h>
#include<string.h>
int main()
{
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		char b[27],w[101];
		scanf("%s",b);
		scanf("%s",w);
		
		int l1 = strlen(b);
		int l2 = strlen(w);		
	
		char flag[27];
		int j;
		for(j=0;j<26;j++)
			flag[j] = 1;
	
		for(j=0;j<l1;j++)
		{
			char c = b[j];
			int num = c;
			num = num - 97;
			flag[num] = 0;
	
		}
		int count=0;
		//Check
		for(j=0;j<l2;j++)
		{
			char c = w[j];
			int num = c;
			num = num - 97;
			if(flag[num]==0)
			{
				flag[num]=1;				
				count++;
			}
		}		
		printf("%d",count);
		printf("\n");
	}
	return 0;
}
				
	
