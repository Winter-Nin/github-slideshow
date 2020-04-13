#include <stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
	int x1;
	int x2;
	int x3;
	int x4;
	int y1;
	int y2;
	int y3;
	int y4;
	
	float A;
	float A1;
	float A2;
	float A3;
	
	printf("Enter the four co-ordinates:\n");
	
	scanf("%d", &x1);
	scanf("%d", &y1);
	scanf("%d", &x2);
	scanf("%d", &y2);
	scanf("%d", &x3);
	scanf("%d", &y3);
	scanf("%d", &x4);
	scanf("%d", &y4);
	
    A = fabs((x1*(y2-y3)+ x2*(y3-y1) + x3*(y1-y2))*0.5);
    
	A2 = fabs((x4*(y2-y3)+ x2*(y3-y4) + x3*(y4-y2))*0.5);
	
	A3 = fabs((x1*(y4-y3)+ x4*(y3-y1) + x3*(y1-y4))*0.5);
	
	A1 = fabs((x1*(y2-y4)+ x2*(y4-y1) + x4*(y1-y2))*0.5);
	
	if (A==A1+A2+A3)
	{
		printf("YES\n");
	}
	
	else
	{
		printf("NO\n");
	}
	
	return 0;
}

