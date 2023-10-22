#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char str[100],str2[100];
	
	gets(str);
	
	puts(str);
	
	int l=strlen(str);
	
	printf("%i\n", l);
	for(int i=0;i<l;i++)
	{
		str2[i]=str[l-i-1];
	}
	
	puts(str2);
	return 1;
}
