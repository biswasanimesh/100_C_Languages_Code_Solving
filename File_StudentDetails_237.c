
#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,phoneNumber,num,i;

    file = fopen("student.txt","a");

    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter Number of Student :  " );
        scanf("%d",&num);

        for(i=1;i<=num;i++)
        {
            printf("Enter Student Name : " );
           scanf("%s",&name);

            printf("Enter Student Age : " );
            scanf("%d",&age);

            printf("Enter student Phone Number : " );
            scanf("%d",&phoneNumber);

            fprintf(file,"\n%s\t%d\t%d\n",name,age,phoneNumber);




        }
        fclose(file);

    }

}
