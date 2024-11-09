#include<stdio.h>
int main()
{
	int principle = 'p' //%d
	;int time = 't' //%d
	;float rate = 'r' //%f
	;float compoundinterest = 'ci' //%f
	;printf("enter the principle: ");
	scanf("%d", &principle);
	printf("enter the time period: ");
	scanf("%d", &time);
	printf("enter the rate: ");
	scanf("%f", &rate);
	
	//calculate the compoundinterest
	compoundinterest = ((1 + rate/100)* time);
	printf("compoundinterest is %f \n",compoundinterest);
	
	return 0;
}