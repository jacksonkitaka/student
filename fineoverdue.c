#include<stdio.h>
int main()
{
	int bookID;
	int duedate;
	int returndate;
	float daysoverdue;
	float finerate;
	float fineamount;
	
	//confirm bookID
	printf("enter bookID: ");
	scanf("%d", &bookID);
	
	//confirm duedate
	printf("enter duedate: ");
	scanf("%d", &duedate);
	
	//confirm returndate
	printf("enter returndate: ");
	scanf("%d", &returndate);
	
	//calculate daysoverdue
	daysoverdue = (returndate - duedate);
	printf("daysoverdue: %f \n",daysoverdue);
	if(daysoverdue <= 7){
		finerate = 20;
		
	}else if
		
	(daysoverdue <= 14){
	finerate = 50;
	
	}else if
	( daysoverdue >=15){
		finerate = 100;
	}
	
	fineamount = (daysoverdue * finerate);
	
	printf("bookID: %d \n",bookID);
	printf("duedate: %d \n",duedate);
	printf("returndate: %d \n",returndate);
	printf("daysoverdue: %.2f \n",daysoverdue);
	printf("finerate: %.2f \n",finerate);
	printf("fineamount: %.4f \n",fineamount);
	
	return 0;
	
}