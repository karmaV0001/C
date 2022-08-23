#include <stdio.h>
int main()
{
	int n,cube = 0,r;
	printf("Enter an number: ");
	scanf("%d",&n);
	int a = n;
	while(n>0)
	{
		r = n%10;
		cube = cube + r*r*r;
		n = n/10;
	}	
	if(cube == a)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is not Armstrong");
	}
	
return 0;
}
