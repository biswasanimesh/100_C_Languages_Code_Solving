/*
Enter any number :
num variable
3x1 = 3
3x2 = 6
....
*/


#include<stdio.h>
int main()
{while(1)
{
 int num, i;
 printf("Enter any Number : ");
 scanf("%d",&num);
 for(i=1; i <=10; i++)
 {
    printf("%d x %d = %d\n",num,i,num*i);

 }
}
return 0;

}
