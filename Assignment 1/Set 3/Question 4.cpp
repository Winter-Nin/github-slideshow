#include <stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
	int x;
	int y;
	int q;
	int r;
	
	printf("Enter two numbers (x>y):\n");
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	q = x / y;
	
	r = x % y;
	
	printf("The quotient of the two numbers are : %d\n", q);
	printf("The remanider of the two numbers are : %d", r);
	
	return 0;
}
