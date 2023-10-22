#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a,b,sum,max,min,i;
	float sr;
	printf("pervyi element:");
	scanf("%i",&a);
	b=0;
	i=1;
	sum=a;
	sr=float(a);
	min=a;
	max=a;
	while(b!=33)
	{
		printf("sum=%i sr=%f min=%i max=%i\n",sum,sr,min,max);
		printf("sled. element:");
		scanf("%i",&b);
		i++;
		sum=sum+b;
		sr=float(sum/i);
		if(b<min)
		{
			min=b;
		}
		if(b>max)
		{
			max=b;
		}
	}
}
