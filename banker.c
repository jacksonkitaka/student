#include<stdio.h>
int main()
{
	int age;
	float income;
	
	//confirm the age of the customer
	printf("enter the customer age: ");
	scanf("%d", &age);
	
	//confirm the annual income of the customer
	printf("enter the annual income amount: ");
	scanf("%d", &income);
	
	//confirm whether the customer is qualified for the loan
	if(age>=21 &income>=2100){
		printf("congratulation you qualify for a loan, \n");
		
	}else{
		printf("unfortunately, you do naot qualify for a loan this time, \n");
	}
	
	return 0;
}