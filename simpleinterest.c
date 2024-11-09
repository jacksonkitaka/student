#include<stdio.h>
int main()
{
	int principle = 'p' //%d
;	int time = 't' //%d
;   float rate = 'r' //%f 
;   float simpleinterest = 'si' //%f
;   printf("enter the principle amount: ");

scanf("%d", &principle);
printf("enter the time period: ");
scanf("%d", &time);
printf("enter the rate: ");
scanf("%f", &rate);

//calculate the simpleinterest
simpleinterest = (principle * rate * time)/100;
printf("simpleinterest is %f \n",simpleinterest);

return 0;
	
}