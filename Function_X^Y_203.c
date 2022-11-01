
#include<stdio.h>
int main()

{
    double base,exp,result=1,i;

    printf("Ënter base :  " );
    scanf("%lf",&base);

     printf("Ënter Exponent  : ");
    scanf("%lf",&exp);


for(i=1; i<=exp; i++)
{
    result =  result * base ; //result = 1* 2=2....
}

printf("%.1lf\n",result);
}
