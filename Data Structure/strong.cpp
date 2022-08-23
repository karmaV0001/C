#include <stdio.h>
int fact(int n)
{
	int factorial = 1;
	for(int i = 1;i<=n;i++)
		{
			factorial = factorial * i;
			
		}
		return factorial;
}
int main()
{
	int n,factorial = 1,sum = 0,r;
	printf("Enter an number: ");
	scanf("%d",&n);
	int a = n;
	
	while(n>0)
	{
		r = n%10;
		int f = fact(r);
		n = n/10;
		sum = sum + f;
	}
	if(sum == a)
	{
		printf("This is a strong number");
	}
	else
	{
		printf("This is not a strong number");
	}
	
	
return 0;
}
