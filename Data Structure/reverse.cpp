#include <stdio.h>
int main()
{
	int n,r;
	
	printf("Enter an number: ");
	scanf("%d",&n);
	int a = n;
	int count = 0;
	while(n>0)
	{
		r = n%10;
		count++;
		n = n/10;
	}
	
	int digit;
	
	if(count%2 == 0)
	{
		digit = count;
	}
	else
	{
		digit = count + 1;
	}
	for(int i = 0; i<digit/2; i++)
	{
		r = r%10;
		a = a/10;
	}
	printf("%d",r);
	
	return 0;
	
}
