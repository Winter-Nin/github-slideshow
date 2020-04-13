#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float x;
	float y;
	
	printf("Enter a number:");
	
	scanf("%f", &x);
	
	y = sqrt(x);
	
	printf("The square root of (%.6f) is %.6f", x,y);
	
	return 0;
}
