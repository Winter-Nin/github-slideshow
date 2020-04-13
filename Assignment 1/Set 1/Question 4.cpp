#include<stdio.h>
#include<conio.h>

int main (void)
{
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
	
	printf("Enter three numbers:\n");
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	A = a^2;
	B = b^2;
	C = c^2;
	
	
	if(A == B + C){
		
		printf("%d\t", a);
		printf("%d\t", b);
		printf("%d\t", c);
		
	}
	
	else if(B == A + C){
		
		printf("%d\t", b);
		printf("%d\t", a);
		printf("%d\t", c);
		
	}
	else if(C == A + B){
		
		printf("%d\t", c);
		printf("%d\t", a);
		printf("%d\t", b);
		
	}
	
	else 
	{
		printf("FAIL!!!!");
	}
	
	
	return 0;
}
