#include<stdio.h>

void calculatePower(double base, double exp)

{
    double result=1,i;


    for(i=1; i<=exp; i++)
    {
        result = result * base;
    }
    printf("%.1lf\n",result);
}

int main()
{
    calculatePower(2,3);
    calculatePower(3,3);
    calculatePower(4,3);



}
