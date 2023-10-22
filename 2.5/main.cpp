#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float a,b,c;
	float x1,x2;
	
	printf("vvedite a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("Dlya  %f*x2+%f*x+%f=0 ",a,b,c);
	if(a!=0)
	{
		float d=b*b-4*a*c;
		
		if(d>0)
		{
			x1=(-b-sqrt(d))/(2*a);
			x2=(-b+sqrt(d))/(2*a);
			printf("x1=%f",x1);
			printf("x2=%f",x2);
		}
		else
		{
			if(d==0)
			{
				x1=-b/(2*a);
				printf("x=%f",x1);
			}
			else
			{
				printf("kornei net");
			}
		}
	}
	else
	{
		float x=-c/b;
		printf("%f",x);
	}
}
