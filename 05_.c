#include <stdio.h>

int main(){
    float celsius,fahrenheit;
    
    printf ("enter temperature in celsius:");
    scanf ("%f",&celsius);

    fahrenheit = (celsius*9/5) + 32;
    printf ("celsius %f = fahrenheit%f",celsius,fahrenheit);
    return 0;
}