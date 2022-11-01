
#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];

    file = fopen("test.txt","a");


    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened here\n");
    printf("Enter University name : ");
    gets(name);

    fputs(name, file);
    fputs("\n",file) ;
    printf("File is written successfuly");
    fclose(file);


    }


    getchar();
}
