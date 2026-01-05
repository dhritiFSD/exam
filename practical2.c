#include<stdio.h>
int main()
{
	int year,month,day,rday;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%400==0||year%4==0 && year%100!=0)
	{
		printf("This year %d is leap year \n");
	}
	else
	{
		printf("It is not leap year");
	}
}
