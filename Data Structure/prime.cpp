#include <stdio.h>
int main()
{
	int n,count = 0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int a;
	for(int i = 2;i < n; i++)
	{
		if(n%i==0)
		{
			count++;
		}
		
	}
	
	if(count == 0)
	{
		printf("Is prime");
	}
	else
	{
		printf("Not prime");
	}
	return 0;
	
}
