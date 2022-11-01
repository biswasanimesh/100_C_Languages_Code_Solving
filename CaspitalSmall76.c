#include<stdio.h>
int main()
{
    char ch;

    printf("Enter Any Number : ");
    scanf("%c",&ch);

    if (ch>='a'  && ch<='z')
        printf("Small Letter");

    else if (ch>='A'  && ch<='Z')
        printf("Capital Letter");

    else if (ch>='0'  && ch<='9999')
        printf("Number");

    else
        printf("It's Not A Letter");

    getch ();



}
