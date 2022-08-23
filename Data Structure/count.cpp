#include <stdio.h>
int main()
{
	int n;
	int count = 0,r;
	printf("Enter an number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r = n%10;
		n = n/10;
		count++;
	}
	printf("%d",count);
}
