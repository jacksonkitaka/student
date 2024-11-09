#include<stdio.h>
int main()
{
	int customerID;
	char customerName;
	int unitConsumed;
	float chargesperunit;
	float surcharge;
	float totalbill;
	float totalamounttopay;
	
	//confirm customerID
	printf("enter customerID: ");
	scanf("%d", &customerID);
	
	//confirm customerName
	printf("enter customerName: ");
	scanf("%c", &customerName);
	
	//confirm unitConsumed
	printf("enter unitConsumed: ");
	scanf("%d", &unitConsumed);
	
	//calculate unitConsumed
	if(unitConsumed <= 199){
		chargesperunit = 1.20;
		
	}else if
	(unitConsumed <=400){
		chargesperunit = 1.50;
		
	}else if
	(unitConsumed <= 600){
		chargesperunit = 1.80;
		
	}else if
	(unitConsumed >= 600){
		chargesperunit = 2.00;
	}
	
	totalbill = (chargesperunit * unitConsumed);
	printf("totalbill: %f \n",totalbill);
	
	if(totalbill >400 &&totalbill <100){
		(surcharge = 15/100);
	}
	surcharge = (totalbill * 15/100);
	
	totalamounttopay = (totalbill + surcharge);
	printf("totalamounttopay: %f \n",totalamounttopay);
	
	return 0;
	
}