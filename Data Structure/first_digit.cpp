#include <stdio.h>
int main()
{
	int n,count = 0,r,a;
	int sum = 0;
	printf("Enter an number: ");
	scanf("%d",&n);
	


	for(int i =0;n>0;i++)
	{
		r = n%10;
		if(i==0)
		{
			sum = sum + r;
		}
		n = n/10;
	} 

	printf("%d",sum + r);
	
return 0;
}
