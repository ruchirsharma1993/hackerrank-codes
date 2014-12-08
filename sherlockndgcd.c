#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int arr[n+1];
		int j;
		int f1=0,f2=0,f3=0,falleven=1;
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
			if(arr[j]==1)
				f1 = 1;
			else if(arr[j]==2)
				f2 = 1;
			else if(arr[j]==3)
				f3 = 1;
			if(arr[j]%2!=0)
				falleven=0;
		}
		
		int fout=0;
		if(f1==1)
			fout=1;
		else if((f2==1)&&(f3==1))
			fout=1;
		else if(falleven==1)
			fout=0;
		else
		{
			int k; fout=1;
			for(j=0;j<n;j++)
			{
				for(k=j+1;k<n;k++)
				{
					int a = arr[j];
					int b = arr[k];
					if((a%2==0)&&(b%2==0))
						continue;
					else if(a>b)
					{
						int l;
						for(l=3;l<=a;l=l+2)
						{
							if((a%l==0)&&(b%l==0))
								{fout=0;break;}
						}
						
					}
					else
					{
						int l;
						for(l=3;l<=b;l=l+2)
						{
							if((a%l==0)&&(b%l==0))
								{fout=0;break;}
						}
					}
				
					
				}
			}
		}
		
		if(fout==1)
			printf("YES");
		else
			printf("NO");
		printf("\n");
	}
	return 0;
}
						
