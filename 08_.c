#include <stdio.h>

int main(){
    int n, sum;
    printf ("enter a number:");
    scanf ("%d",&n);
    sum = n*(n+1)/2;
    printf ("the sum of n natural number %d",sum);
    return 0;
}