#include<stdio.h>
#include<conio.h>
#include<math.h>

int main (void)
{
	int x;
	int X;
	int N;
	
	printf("Enter two numbers to be used in an expotenial opertion(X^N):");
	
	scanf("%d", &X);
	scanf("%d", &N);
	
	x = 2 * pow(X,N);
	
	printf("The final value of the  expotenial opertion(X^N) is : %d", x);
	
	return 0;
}
