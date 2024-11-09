#include <stdio.h>
int main(){
	

int rows,column;
int i,k;
int a[2][2],b[4][4],c[5][5];

printf("enter row size:");
scanf("%d",&rows);
printf("entet column size:");
scanf("%d",&column);

printf("enter %dx%d element of A:\n",rows,column);


  for(i=0;i<rows;i++){
		
	 for(k=0;k<column;k++){
		 
		 scanf("%d",&a[i][k]);
	 }	
	}

	printf("%dx%d element of B:\n",rows,column);
	
	for(i=0;i<rows;i++){
		
		for(k=0;k<column;k++){
			
			scanf("%d",&b[i][k]);
		}
	}
	
	for(i=0;i<rows;i++){
		
		for(k=0;k<column;k++){
			
			c[i][k]=a[i][k] + b[i][k];
			
		}
	}
	
	printf("sum of matrix:\n");
	for(i=0;i<rows;i++){
		
		for(k=0;k<column;k++){

				printf("%d\n",c[i][k]);
			
		
		}
	}       printf("\n");
	

	
	
	
	
	
	
	
	
	
	return 0;
}