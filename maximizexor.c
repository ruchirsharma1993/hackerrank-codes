#include<stdio.h>
int xor(int x,int y)
{
	int a = x&y;
	int b = ~x&~y;
	int z = ~a&~b;
	return z;
}
	
int main()
{
	int l,r;
	scanf("%d %d",&l,&r);
	int i,j;
	int max = xor(l,r);
	for(i=l;i<r;i++)
	{
		for(j=i;j<r;j++)
		{
			int t = xor(i,j);
			if(t>max)
				max=t;
		}
	}
	printf("%d",max);
return 0;
}
	
		
