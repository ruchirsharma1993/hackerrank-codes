#include<stdio.h>
#include<string.h>
int main()
{
	char c[100001];
	scanf("%s",c);
	int arr[27];
	int i;
	for(i=0;i<27;i++)
	{
	arr[i]=0;
	}
	
	int len = strlen(c);
	for(i=0;i<len;i++)
	{
		int num = c[i]-97;
		arr[num]++;
	}
	int flag=0;
	
	for(i=0;i<27;i++)
	{
		//if even
		if(len%2==0)
		{	
			if(arr[i]%2!=0)	
			{
				printf("NO");
				return 0;
			}
		}
		else
		{
			if(arr[i]%2!=0)
			{	
				if(flag==0)
					flag=1;
				else
				{
					printf("NO");
					return 0;
				}
			}
		}
	}
	printf("YES");
	return 0;
}
