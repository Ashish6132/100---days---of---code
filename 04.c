#include <stdio.h>

int main(){
    int r;
    printf ("enter the radius of circle:");
    scanf ("%d",&r);
    
    int area=0;
    area = 22/7*r*r;
    printf ("the area of circle is %d",22/7*r*r);
    return 0;
}