#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float p; //intial amount
	float r; // rate of interest = 3.5%
	float si; //simple interest
	float cia; //compound interest annually
	float cisa; //compound interest semi annually
	float ciq; //compound interest quarterly
	float cim; //compound interest monthly
	float cid; //compound interest daily
	float v;
	float w;
	float x;
	float y;
	float z;
	float a1;
	float a2;
	float a3;
	float a4;
	float a5;
	float a6;
	
	//compound interest formula = a(1 + (r/n))^nt
	
	printf("Enter intial amount:");
	
	scanf("%f", &p);
	
	r = 0.035;
	
	a1 = p * (1 + (r * 10));
	
	si = a1 - p;
	
	printf("The simple interest for ten years with intial pricipal amount of (%f)  is: %f \n", p, si);
	
	v = (1 + (r / 1));

	a2 = p * pow(v,10);
	
	cia = a2 - p;
	
	printf("The compound interest (annually) for ten years with a intial pricipal amount of (%f) is: %f \n", p, cia);
	
	w = (1 + (r / 2));
	
	a3 = p * pow(w,10 * 2);
	
	cisa = a3 - p;
	
	printf("The compound interest (semi-annually) for ten years with a intial pricipal amount of (%f) is: %f \n", p, cisa);
	
	x = (1 + (r / 4));
	
	a4 = p * pow(x,10 * 4);
	
	ciq = a4 - p;
	
	printf("The compound interest (quarterly) for ten years with a intial pricipal amount of (%f) is: %f \n", p, ciq);
	
	y = (1 + (r /12 ));
	
	a5 = p * pow (y, 10 * 12);
	
	cim = a5 - p;
	
	printf("The compound interest (monthly) for ten years with a intial pricipal amount of (%f) is: %f \n", p, cim);
	
	z = (1 + (r / 365));
	
	a6 = p * pow(z,10*365);
	
	cid = a6 - p;
	
	printf("The compound interest (daily) for ten years with a intial pricipal amount of (%f) is: %f \n", p, cid);

	return 0;
	
}
