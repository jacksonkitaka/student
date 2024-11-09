#include<string.h>
struct book{
	char title[30];
	char author[30];
	int publicationyear;
	char ISBN[13];
	float price;
	
}book1;
int main()
{

book1.title;
book1.author;
book1.publicationyear;
book1.ISBN;
book1.price;

printf("enter book1.title: ");
scanf("%s: \n", &book1.title);

printf("enter book1.author: ");
scanf("%s: \n", &book1.author);

printf("enter book1.publicationyear: ");
scanf("%d: \n", &book1.publicationyear);

printf("enter  book1.ISBN: ");
scanf("%s: \n", &book1.ISBN)
;
printf("enter  book1.price: ");
scanf("%f: \n", &book1.price);

return 0;
}
	
	