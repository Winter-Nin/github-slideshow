#include<stdio.h>
#include<conio.h>
#include<math.h>

int main (void)
{
	int x;
	int y;
	
	printf("Enter two differnet numbers:\n");
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	
	x = x + y;
	y = x - y;
	x = x - y;	
	
	printf("\nThe two numbers are now swapped:\n%d\n%d",x,y);
	
	return 0;
	
}
