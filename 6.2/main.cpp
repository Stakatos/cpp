#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str[100],q;
	
	gets(str);
	
	puts(str);
	
	int l=strlen(str);
	
	for(int i=0;i<l;i++)
	{
		str[i]=str[i+1];
	}
	
	puts(str);

}
