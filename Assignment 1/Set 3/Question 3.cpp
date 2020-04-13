#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int r; // radius of cylinders
	int h; //height of the cylinders
	int n; //no. of cylinders
	int x; // t.s.a of cylinders
	int x1;
	int x2;
	int c; // cost of paint

	printf("****All measurements will be taken in Feet ****");
		
	printf("\nEnter the radius (r) of the cylinder:\n");
	
	scanf("%d", &r);
	
	printf("Enter the height (h) of the cylinder:\n");
	
	scanf("%d", &h);
	
	printf("Enter the number (n) of the cylinders:\n");
	
	scanf("%d", &n);
	
	//make an x1= 2pi rh, x2= pi r^
	
	x1 = (3.14 * 2 * r* h);
	
	x2 = (3.14 * r * r);
	
	x = x1 + x2;
	
	c = 100 *(x * n);
	
	printf(" The total cost of painting the cylinders are : %d", c);
	
	return 0;
}
