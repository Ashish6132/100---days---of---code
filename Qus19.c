#include<stdio.h>
int main(){
int side_a,side_b,side_c;
printf("Enter the sides of triangle :");
scanf("%d %d %d",&side_a,&side_b,&side_c);
if(side_a == side_b && side_b==side_c){
    printf("Equilateral Triangle");
}
else if(side_a==side_b || side_b==side_c || side_c==side_a){
    printf("Isosceles Triangle");
}
else{
    printf("Scalene Triangle");
}
return 0;
}