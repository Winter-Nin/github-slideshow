#include <stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
	int d, m, y;
	int a, b, c, x, n;
	
	printf("Enter a date:\n");
	
	scanf("%d, %d, %d", &d, &m, &y);
	
	if (d < 29)
	{
		a = 29 - d;
	}
	
	else if(31 > d > 29)
	{
		a = d - 29;
	}
	
	else
	{
		printf("The day entered is invalid.\n");
	}
    
    if(m <= 2)
    {
    	b = 2 - m;
	}
	
	else if(2 < m <= 12)
	{
		b = 12 - m;
	}

    else
    {
    	printf("The month entered is invalid.");
	}
	
	x = y % 4;
	
	c = 4 - x;
	
	n = (a) + (b * 30) + (c * 365);
	
	printf("%d, %d ", x, c);
	
	printf("The number of days left for Feb 29 is %d", n);
	
	return 0;
}

