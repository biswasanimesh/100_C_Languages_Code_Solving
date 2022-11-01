

#include<stdio.h>
int main()
{
    FILE *file;
    char name[25];
    int age;

    file = fopen("test.txt","a");


    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened here\n");
        printf("Enter your name : ");
        gets(name);

        printf("Enter your age : ");
        scanf("%d",&age);

        fprintf(file,"Name = %s, Age = %d\n",name,age);


        printf("File is written successfuly");
        fclose(file);


    }


    getchar();
}
