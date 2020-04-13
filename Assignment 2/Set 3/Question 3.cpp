#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()

{

	int d1;
	int m1;
	int y1;
	int d2;
	int m2;
	int y2;
	int x1;
	int x2;
	int n1;
	int n2;
	
	printf("Enter two dates in the format of (dd/mm/yyyy)\n");
	
	scanf("%d", &d1);
	scanf("%d", &m1);
	scanf("%d", &y1);
	scanf("%d", &d2);
	scanf("%d", &m2);
	scanf("%d", &y2);
	
	x1 = d1 + (m1 * 30) + (y1 * 360);
	
	x2 = d2 + (m2 * 30) + (y2 * 360);

	if (x1>x2)
	{
	    n1 = (x1 - x2) + 1;
	    
		printf("%d\n",n1);
	}
	
	if (x2>x1)
	{
	    n2 = (x2 - x1) + 1;
	
	    printf("%d\n",n2);
	    
	}
	
    return 0;
}

