#include <iostream>
#include <stdio.h>

int main() {
	int d,m,y;
	
	printf("vvedite day:");
	scanf("%i",&d);
	printf("vvedite month:");
	scanf("%i",&m);
	printf("vvedite year:");
	scanf("%i",&y);
	if((d>0)&&(d<32)&&(m>0)&&(m<13))
	{
		if((d>=21)&&(m==3)||(d<=20)&&(m==4))
		{
			printf("zodiac is - oven\n");
		}
		if((d>=21)&&(m==4)||(d<=21)&&(m==5))
		{
			printf("zodiac is - telec\n");
		}
		if((d>=22)&&(m==5)||(d<=21)&&(m==6))
		{
			printf("zodiac is - bliznecy\n");
		}
		if((d>=22)&&(m==6)||(d<=22)&&(m==7))
		{
			printf("zodiac is - rak\n");
		}
		if((d>=23)&&(m==7)||(d<=21)&&(m==8))
		{
			printf("zodiac is - lev\n");
		}
		if((d>=22)&&(m==8)||(d<=23)&&(m==9))
		{
			printf("zodiac is - deva\n");
		}
		if((d>=24)&&(m==9)||(d<=23)&&(m==10))
		{
			printf("zodiac is - vesy\n");
		}
		if((d>=24)&&(m==10)||(d<=22)&&(m==11))
		{
			printf("zodiac is - scorpion\n");
		}
		if((d>=23)&&(m==11)||(d<=22)&&(m==12))
		{
			printf("zodiac is - strelec\n");
		}
		if((d>=23)&&(m==12)||(d<=20)&&(m==1))
		{
			printf("zodiac is - kozerog\n");
		}
		if((d>=21)&&(m==1)||(d<=19)&&(m==2))
		{
			printf("zodiac is - vodolye\n");
		}
		if((d>=20)&&(m==2)||(d<=20)&&(m==3))
		{
			printf("zodiac is - ryby\n");
		}
													
	}
	else
	{
		printf("nevernye dannye");
		return 0;
	}
	int g=y%12;
	switch (g)
	{
		case 0:
		{
			printf("year is obezyana\n");
		}
		break;
		case 1:
		{
			printf("year is petuh\n");
		}
		break;
		case 2:
		{
			printf("year is sobaka\n");
		}
		break;
		case 3:
		{
			printf("year is svinya\n");
		}
		break;
		case 4:
		{
			printf("year is krysa\n");
		}
		break;
		case 5:
		{
			printf("year is byk\n");
		}
		break;
		case 6:
		{
			printf("year is tiger\n");
		}
		break;
		case 7:
		{
			printf("year is krolik\n");
		}
		break;
		case 8:
		{
			printf("year is dragon\n");
		}
		break;
		case 9:
		{
			printf("year is zmeya\n");
		}
		break;
		case 10:
		{
			printf("year is loshad\n");
		}
		break;
		case 11:
		{
			printf("year is koza\n");
		}

	}
	
	if(y%4==0)
	{
		printf("vysokosnyi");	
	}
	else
	{
		printf("ne vysokosnyi");
	}
}
