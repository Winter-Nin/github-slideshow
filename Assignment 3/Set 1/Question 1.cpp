#include <stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
	float c, cu, ac, sc, net;
	
	printf("Enter the number of charges:\n");
	
	scanf("%f", &c);
	
	if (c <= 199.0)
	{
		cu = 1.20;
		
		ac = cu * c;
		printf("The Amount charges is : %.2f\n", ac);
	}
	
	else if (200.0 <= c < 400.0)
	{
		cu = 1.50;
		
		ac = cu * c;
		printf("The Amount charges is : %.2f\n", ac);
	}
	
	else if (400.0 <= c < 600.0)
	{
		cu = 1.80;
		
		ac = cu * c;
		printf("The Amount charges is : %.2f\n", ac);
	}
	
	else if (600.0 <= c)
	{
		cu = 2.00;
		
		ac = cu * c;
		printf("The Amount charges is : %.2f\n", ac);
	}
	
	if (ac > 400)
	{
		sc = (0.15) * ac;
	}
	
	else 
	{
		sc = 0;
	}

    net = sc + ac;
    
    if(net < 100)
    {
    	net = 100;
	}
	
	printf("The Amount charges is : %.2f\n", ac);
	printf("The Surcharge amount is : %.2f\n", sc);
	printf("The Net amount is : %.2f\n", net);
	
	return 0;
	
}
