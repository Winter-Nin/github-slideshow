#include<stdio.h>
#include<conio.h>

int main (void)
{
	int temp;
	int hum;
	
	printf("Enter the Temperature:");
	printf("\nEnter the Humidity:");
	
	scanf("%d", &temp);
	scanf("%d", &hum);
	
	if(temp<20){
		
		printf(" Wear Wooley Woolens");
		
	}
	
	if(temp<45 && temp>35){
		
	printf(" Wear Summery Clothes");
		
	}
	

    if(temp<35 && temp>20){
    	
    	if(hum<75 && hum>20)
    	
    	printf("Wear Breezy Clothes");
    	
		else{
			printf("Wear Summery Clothes");
		}
    				 
	}
	
	return 0;
	
	
}
