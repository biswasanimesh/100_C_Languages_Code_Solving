
#include<stdio.h>


enum days_of_week
{

    Sun,Mon,Tue,Wed,thu,Fri,Sat
};

int main()
{

   enum days_of_week day1,day2;

    day1 = Tue;

    day2 = Wed;

    int dif = day2-day1;
    printf("Day diffenrence  = %d\n",dif);



}
