#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float a;
	float b;
	float c;
	float d;
	float x;
	float y;
	float z;
	
	printf("Enter four numbers:\n"); 
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	
	if ((a > b) && (a > c) && (a > d))
	{
		x = a - b;
		
		y = a - c;
		
		z = a - d;
		
		printf("Check 1, 2 ,3 ");
		
		
		if ((x > y) && x > z)
		{
			printf("The difference between the largest and smallest numbers is %.4f", x);
		}
		
		else if ((y > x)&& (y > z))
		{
			printf("The difference between the largest and smallest numbers is %.4f", y);
		}
		
		else if (z > y && z > x)
		{
			printf("The difference vetween the largest and smallest numbers is %.4f", z);
		}
	}
	
	else if ((b > a) && (b > c) && (b > d))
	{
		x = b - a;
		
		y = b - c;
		
		z = b - d;
		
		if ((x > y) && (x > z))
		{
			printf("The difference vetween the largest and smallest numbers is %.4f", x);
		}
		
		else if ((y > x) && (y > z))
		{
			printf("The difference vetween the largest and smallest numbers is %.4f", y);
		}
		
		else if ((z > y) && (z > x))
		{
			printf("The difference vetween the largest and smallest numbers is %.4f", z);
		}
	}
	
	else if ((c > a) &&(c > b) && (c > d))
	{
		x = c - a;
		
		y = c - b;
		
		z = c - d;
		
		if ((x > y) && (x > z))
		{
			printf("The difference vetween the largest and smallest numbers is %.4f", x);
		}
		
		else if ((y > x) && (y > z))
		{
			printf("The difference vetween the largest and smallest numbers is %.4f", y);
		}
		
		else if ((z > y) && (z > x))
		{
			printf("The difference vetween the largest and smallest numbers is %.4f", z);
		}
	}
	
	else if ((d > b) && (d > b) && (d > c))
	{
		x = d - a;
		
		y = d - b;
		
		z = d - c;
		
		if ((x > y) && (x > z))
		{
			printf("The difference vetween the largest and smallest numbers is %.4f", x);
		}
		
		else if ((y > x) && (y > z))
		{
			printf("The difference vetween the largest and smallest numbers is %.4f", y);
		}
		
		else if ((z > y) && (z > x))
		{
			printf("The difference vetween the largest and smallest numbers is %.4f", z);
		}
	}
	
	return 0;
	
}
