#include<stdio.h>
int main ()

{
    int choice;

    float temp, convertTemp;

    printf("Temperature Converter menu\n");

    printf("l. Fahrenheit to Celcius\n");

    printf("2. Celcius to Fahrenheit\n");

    printf("Enter Your Choice : ");

    scanf("%d", &choice);

    switch(choice)

    {
   case 1 :
    {
      printf("Enter The Fahrenheit Temperature : ");
      scanf("%f",&temp);
      convertTemp = (temp-32)/1.8;
      printf("The temperature is in Celcius : %f\n",convertTemp);
      break;


    }

       case 2 :
    {
      printf("Enter The Celcius Temperature : ");
      scanf("%f",&temp);
      convertTemp = (1.8*temp)+32;
      printf("The temperature is in Fahrenheit : %f\n",convertTemp);
    }
       default:
        printf("Not a correct value");
    }


}
