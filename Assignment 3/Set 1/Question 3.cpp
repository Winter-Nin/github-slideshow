#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
	int n,a,b,c,d,x,diff;
	
	printf("Enter a four-digit number.");
	
	scanf("%d",&n);
	
	if (n >= 1000 && n<= 9999)
	{
		a = n%10;
		
		printf("%d",a);
		
		b = n/10;
		
		b = b%10;
		
		printf("%d",b);
		
		c = n/100;
		
		c = c%10;
		
		printf("%d",c);
		
		d = n/1000;
		
		printf("%d,",d);
		
		x = (a*1000 + b*100 + c*10 +d);
		
		diff = fabs(n-x);
		
		printf("%d",diff);
	}
	
	else 
	{
	    printf("Please enter a 4 digit number");
	}	
	
	return 0;
	
}
