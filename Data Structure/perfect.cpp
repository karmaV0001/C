#include <stdio.h>
int main()
{
	int n,sum = 0,r;
	printf("Enter an number: ");
	scanf("%d",&n);
	int a = n;
	int count = 0;
	for(int i = 1;i < n; i++)
	{
		if(n%i==0)
		{
			
			sum = sum + i;
			
		}
		
	}
	if(sum == a)
	{
		printf("Number is perfect ");
	}
	else
	{
		printf("Number is not perfect");
	}
return 0;
}
