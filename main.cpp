#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int pin1,pin2;
	printf("pin1=");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	
	if((pin1==123)&&(pin2==321))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}
