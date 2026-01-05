#include<stdio.h>
int main()
{
	int x=10,y=20;
	int temp;
	printf("Before swapping x and y %d %d \n",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("After swapping x and y %d %d \n",x,y);
	
}
