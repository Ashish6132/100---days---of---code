#include <stdio.h>

int main(){
    int a , b;
    printf ("enter the two number:");
    scanf ("%d %d",&a,&b);
    
    int sum = 0;
    sum = a+b;
    printf ("the sum is %d",a+b);
    
    int  difference = 0;
    difference = a-b;
    printf ("the  difference is %d\n",a-b);

    int multiply = 0;
    multiply = a*b;
    printf ("the multiply is %d\n",a*b);

    float quotient = 0;
    quotient = a%b;
    printf ("the quotient is %f\n",a%b);
    return 0;
}