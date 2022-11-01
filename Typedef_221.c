
#include<stdio.h>

struct Book
{
    char name[20];
    int price;
};
int main()
{
typedef struct Book Book;

Book b = {"Amar Jibonkotha",350};
printf("Book Nmae  =  %s\n",b.name);
printf("Book Price  =  %d\n",b.price);

}
