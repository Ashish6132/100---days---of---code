#include <stdio.h>

int main(){
    int length, breadth;
    length = 12;
    breadth = 11;

    int area = 0;
    area = length*breadth;
    printf ("the area of rectangle is %d\n",length*breadth);

    int perimeter = 0;
    perimeter = 2*(length+breadth);
    printf ("the perimeter of rectangle is %d\n",2*(length+breadth));
    return 0;
}