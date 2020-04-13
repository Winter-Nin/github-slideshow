#include<stdio.h>
#include<conio.h>
#include<math.h>

int main (void)
{
	int a;
	int b;
	int r;
	
	printf("Enter two numbers for the format : b/a \n");
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	r = b%a;
	
	if (r == 0)
	{
		printf("YES!!");
	}
	
	else
	{
		printf("NOES!!");
	}
	
	return 0;
}
