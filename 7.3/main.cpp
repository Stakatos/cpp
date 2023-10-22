#include <iostream>

int quad(int a)
{
	for(int i=0;i<=a/2;i++)
	{
		if(i*i==a)
		{
			printf("%i - eto kvadrat %i",a,i);
			return 0;
		}
	}
printf("%i - ne kvadrat",a);
return 0;
}

int main() 
{
	int k;
	for(int i=1;i<4;i++)
	{
		printf("\nvvadite %i chislo: ",i);
		scanf("%i",&k);
		quad(k);
	}

	return 0;
}
