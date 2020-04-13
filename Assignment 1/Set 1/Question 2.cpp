//Assignment 1
//Set 1

#include<stdio.h>
#include<conio.h>

int main (void)
{
	//Number:49-57, ALPHABET:65-90(A), 97-122(a), SYMBOL:123-126, 91-96, 58-63,33-47 

	char weeb;	
	
	printf("Type any Character or a Number:\n");
	scanf("%c", &weeb);
	
    if((weeb>='A' && weeb<='Z') || (weeb>='a' && weeb<='z')){
      	
       printf("This is an alphabet");
	}
	
	else if(weeb>='0' && weeb<='9'){
      	
       printf("This is a Numero");
	}
	
//	else if(weeb>='a' && weeb<='z'){
//      	
//       printf("This is an ALPHABET");
//	}
	
	else if(weeb>=33 && weeb<=47){
      	
       printf("This is a Symbol");
	}
	
	else
	{
		printf("You didn't give the right input :P");
	  }  
	
    return 0;
}
