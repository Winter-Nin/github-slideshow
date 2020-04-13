#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int x, y, n, a, b, c, z;
	
	printf("Enter a number less than 1000\n");
	
	scanf("%d", &n);
	
	if (n < 1000)
	{
		a = n / 100;
		
		x = n % 100;
		
		b = x / 10;
		
		y = x % 10;
		
		c = y / 1;
		
		z = a + b + c;
		
		printf("The sum of the numbers is %d", z);
		
	}
	else 
	{
		printf("Invalid input.");
	}
	
	return 0;

}
