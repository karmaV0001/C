#include <stdio.h>
int main()
{
	int num1,num2;
	int largerNumber;
	int lcm = 0;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter first number: ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		largerNumber = num1;
	}
	else
	{
		largerNumber = num2;
	}
	
	for(int i = 2; i<=largerNumber; i++)
	{
		if(num1%i == 0 && num2%i == 0)
		{
			lcm = i;
      break;
		}
	}
	printf("LCM is %d",lcm);
	return 0;
}
