#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		char c[1000];
		scanf("%s",c);
		int len = strlen(c);
		int count=0;
		int first=0,last = len-1;
		while(first<last)
		{
			//printf("First: %c",&c[first]);
			//printf("last: %c",&c[last]);
						
			if(c[first]>c[last])
			{
				count = count+c[first] -c[last];
			}
			else if(c[last]>c[first])
			{	
				count = count+c[last] - c[first];
			}
			first++;
			last--;
		}
	
	printf("%d",count);
	printf("\n");
	}
	return 0;
}
