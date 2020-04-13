#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    //no input required
    
	float G,x,y,g1,g2;
	
	int r1,r2,d1,d2;

	G=6.67408*pow(10,-11);
	
	x=5.972*pow(10,18);
	
	y=7.35*pow(10,8);
	
	d1=250;
	
	d2=50;
	
	r1=6361;
	
	r2=1737;

	g1 = (G * x)/(pow(d1+r1,2));
	
	g2 = (G * y)/(pow(d2+r2,2));
	
	printf("%0.6lf,%0.6lf",g1,g2);
}
