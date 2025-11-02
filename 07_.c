#include <stdio.h>

int main(){
    int a, b;
    printf ("enter the number a and b");
    scanf ("%d %d",&a, &b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf ("swaping number a = %d b = %d",a,b);
    return 0;
}