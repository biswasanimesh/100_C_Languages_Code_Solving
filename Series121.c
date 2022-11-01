//1+2+3....+N;
#include<stdio.h>
int main()
{

int n,sum=0,i;
printf("Enter the last number of the series : ");
scanf("%d",&n);
printf("1+3+5+....+%d",n);
//1 + 3 + 5 + 7 + ....    + N,

for(i=1;i<=n;i=i+2)
{
    sum = sum + i;
}
printf(" = %d\n",sum);


  getch();
}
