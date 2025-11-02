#include <stdio.h>

int main(){
    int a, b, temp;
    printf ("enter a number:");
    scanf ("%d",&a);

    printf ("enter b number:");
    scanf ("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf ("After a swaping: a=%d , b=%d",a,b);
    return 0;
}