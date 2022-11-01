#include<stdio.h>
int main()

{    int i= 1;

Print:
    printf("%d\n",i);
    i++;

    if(i<5)
        goto Print;  //label calling here;

    return 0;




}
