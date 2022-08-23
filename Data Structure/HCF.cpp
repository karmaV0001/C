#include <stdio.h>
int main()
{
	int num1,num2;
	int smallNumber;
	int hcf = 0;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter first number: ");
	scanf("%d",&num2);
	if(num1<num2)
	{
		smallNumber = num1;
	}
	else
	{
		smallNumber = num2;
	}
	
	for(int i = 1; i<=smallNumber; i++)
	{
		if(num1%i == 0 && num2%i == 0)
		{
			hcf = i;
		}
	}
	printf("HCF is %d",hcf);
	return 0;
}
