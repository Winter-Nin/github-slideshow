#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x1;
	float x2;
	float y1;
	float y2;
	float s; // distance b/w the 2 pts
	
	printf("Enter the co-ordinates of the two points:");
	
	scanf("%f", &x1);
	scanf("%f", &x2);
	scanf("%f", &y1);
	scanf("%f", &y2);
	
	s = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	
	printf("The distance between the two pionts is : %0.1f", s);
	
	return 0;
}

