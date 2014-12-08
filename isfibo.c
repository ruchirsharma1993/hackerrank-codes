#include<stdio.h>
#include<math.h>
int isroot(long double num)
{
	long long int n = sqrtl(num);
		
	if(n*n==num)
		return 1;
	else
		return 0;
}
	
int main()
{
	long long int n;
	int t,i;
	long long int arr[55]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,
14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,701408733,1134903170,1836311903,2971215073,4807526976,7778742049,12586269025,20365011074};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		int flag=0,j;
		for(j=0;j<52;j++)
		{
			if(arr[j]==n)
				{flag=1;break;}
			else if(arr[j]>n)
				{flag=0;break;}
		}
		if(flag==1)
			printf("IsFibo");
		else
			printf("IsNotFibo");
		printf("\n");
	}
	/*for(i=0;i<t;i++)
	{
		scanf("%Lf",&n);
		//check for fibonnaci
		long double num1,num2;
		num1 = (5 * n * n);
		num2 = num1-4;
		num1 = num1+4;
		
		int f1 = isroot(num1);
		int f2 = isroot(num2);
		if((f1==1)||(f2==1))			
			printf("IsFibo");
		else
			printf("IsNotFibo");
		printf("\n");
	}*/
	return 0;

}
