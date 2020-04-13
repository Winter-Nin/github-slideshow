#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a, n;
	
	printf("Enter a number\n");
	
	scanf("%d", &n);
	
	a = n % 2;

	if(a == 0)
	{
		printf("The number entered is even.");
	}
	
	else
	{
		printf("The number is odd.");
	}
	return 0;

}

