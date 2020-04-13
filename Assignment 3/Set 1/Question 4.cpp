#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int km,fare;

char rain;

scanf("%d,%c", &km,&rain);

if(rain=='N')
{
    if(km>=0 && km<=12)
    
    
	fare=100;
    
	else if(km>12 &&km<=16)
    
	fare=100+(km-12)*8;
    
	else if(km>16 &&km<=20)
    
	fare=100+32+(km-16)*6;
else if(km>20)
    fare=100+32+24+(km-20)*5;
 }
else if(rain=='Y')
{
if(km>=0 && km<=12)
    fare=100+(2*km);
else if(km>12 &&km<=16)
    fare=100+((km-12)*8)+(2*km);
else if(km>16 &&km<=20)
    fare=100+32+((km-16)*6)+(2*km);
else if(km>20)
    fare=100+32+24+((km-20)*5)+(2*km);
 }
printf("%d", fare);

return 0;
}

