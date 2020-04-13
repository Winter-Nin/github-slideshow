#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int x1;
	int x2;
	int y1;
	int y2;
	int m;
	
	printf("Enter the points X1 Y1 :\n");
	
	scanf("%d", &x1);
	
	scanf("%d", &y1);
	
	printf("Enter the points X2 Y2 :\n");
	
	scanf("%d", &x2);
	
	scanf("%d", &y2);
	
	m = ((y1 - y2) / (x1 - x2));
	
	if(x1 == x2)
	{
		printf("Undefined");
	}
	
	else 
	{
		printf("The slope of the line segment is : %d", m);
	}
	
	return 0;
	
}
