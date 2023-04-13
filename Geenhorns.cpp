#include<stdio.h>

maim()
{
	int bs,hra,da,ta;
	printf("enter your base salary");
	scanf("%d",&bs);
	printf("enter your hra");
	scanf("%d",&hra);
	printf("enter your da");
	scanf("%d",&da);
	printf("enter your ta");
	scanf("%d",&ta);
	
	hra*bs/100;
	da*bs/100;
	ta*bs/100;
	printf("bs+hra+da+ta");
	
}
