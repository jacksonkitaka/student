#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[30];
	int marks;
	int number;
	
	FILE *fptr;
	fptr = (fopen("C:\\project\\students.txt","w"));
	if(fptr != NULL)
	{
	printf("error! in opening the file");
	exit(1);
		
	}
	printf("enter name: ");
	scanf("%s", &name);
	printf("enter marks: ");
	scanf("%d", &marks);
	printf("number of students: ");
	scanf("%d", &number);
	
	fprintf(fptr,"%s,%d,%d \n",name,marks,number);
	
	fclose(fptr);
	
	return 0;
	
	
}