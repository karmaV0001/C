#include <stdio.h>
int main()
{
	int n,count = 0,r,a;
	printf("Enter an number: ");
	scanf("%d",&n);
	scanf("%d",&a);
	while(n>0)
	{
		r = n%10;
		if(r==a)
		{
			count++;
		}
		n = n/10;
	} 
	printf("%d",count);
return 0;
}
