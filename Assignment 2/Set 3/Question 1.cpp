#include <stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
  float a;
  float b;
  float c;
  float D; //determinat (b^2 -4ac)
  float x; // root 1
  float y; //root 2
  float rp; //real part if x+iy
  float ip; //imaginary part of x+iy
  
  printf("Please note that 'a' can't be equal to zero\nEnter a , b , c of a quadratic equation :\n ");
  
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);

  D = b*b - 4*a*c;
 
  if(D>0)
  {
     x=(-b + sqrt(D))/(2*a);
     
     y=(-b - sqrt(D))/(2*a);
     
     if(x>y)
     {
        printf("%.1lf, %.1lf", x, y);
     }  
     else if(y>x)
     {
         printf("%.1lf, %.1lf", y, x);
     }
  }




  else if(D<0) 
  {
     rp= -b/(2*a);
     
     ip= (sqrt(-D))/(2*a);
     
     printf("%.1lf+i%.1lf, %.1lf-i%.1lf", rp, ip, rp, ip);
     
  }

    return 0;
}


