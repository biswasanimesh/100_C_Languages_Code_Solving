
#include<stdio.h>

struct Person
{
    char name[20];
    int age;
    float salary;
};

void display(struct  Person p)
{
    printf("Name : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %f\n",p.salary);
}
int main()
{

    struct Person person1,person2;

    strcpy(person1.name,"Animesh Biswas");
    person1.age = 27;
    person1.salary = 12250.50;
    display(person1);

    strcpy(person2.name,"Priyanka Dhar");
    person2.age = 24;
    person2.salary = 22250.50;
    display(person2);



}
