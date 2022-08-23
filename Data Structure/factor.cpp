#include <stdio.h>
int main()
{
	int n,count = 0;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Factor's are: ");
	for(int i = 1;i <= n-1; i++)
	{
		if(n%i==0)
		{
			printf("\n%d ",i);
			count++;
		}
		
	}
	
	
		printf("\nTotal number of factor are %d",count);
	
	
	return 0;
	
}
