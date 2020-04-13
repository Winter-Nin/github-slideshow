#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int x, y, z, v, n, a, b, c, d;
	int k, l, m, e, f, i, p, q;
	
	printf("Enter a number less than 10,000\n");
	
	scanf("%d", &n);
	
	if (n < 10000)
    {
		a = n / 1000;
		
		x = n % 1000;
		
		b = x / 100;
		
		y = x % 100;
		
		c = y / 10;
		
		z = y % 10;
		
		d = z / 1;
		
		v = a + b + c + d;
	}
	
	else
	{
    	printf("The number entered is too large.");		
	}
	
	if(v > 10)
	{
		k = v / 10;
		
		l = k % 10;
		
		m = l / 1;
		
		q = k + m;
		
		printf("%d", q);
	}
	
	else
	{
		printf("%d", v);
	}
	
	if(q > 10)
	{
		e = q / 10;
		
		f = q % 10;
		
		i = f / 1;
		
		p = e + i;
		
		printf("%d", p);
	}
	
	return 0;
	
}
