#include<stdio.h>
int main()
{
	int n;
	int i;
	long long fact=1;
	printf("Enter  the number:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Invalid Number");
		return 0;
	}
	else
	{
		for(i=n;i>0;i--)
		{
			fact=fact*i;
		}
		printf("Factorial of %d is :%lld \n",n,fact);
	}
}
