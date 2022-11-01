#include<stdio.h>
int main()
{
    int a,b,value;
    scanf("%d %d" , &a,&b);
    char sign;

    value  = a+b;
    sign = '+';
    printf("%d %c %d = %d\n", a, sign,b,value);

    value  = a-b;
    sign = '-';
    printf("%d %c %d = %d\n", a, sign,b,value);

    value  = a*b;
    sign = '*';
    printf("%d %c %d = %d\n", a, sign,b,value);

    value  = a/b;
    sign = '/';
    printf("%d %c %d = %d\n", a, sign,b,value);


return 0;

}





