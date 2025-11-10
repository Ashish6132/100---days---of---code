#include<stdio.h>
int main(){
    int late_days ,fine;
    printf("Enter the number of late days:");
    scanf("%d",&late_days);
  if(late_days>30){
    printf("Your membership is cancelled");
  }
  else if(late_days>10){
    fine = (5*2) +(5*4)+((late_days-10)*6);
    printf("Your fine is : %d",fine);
  }
  else if(late_days>5){
    fine = (5*2)+((late_days-5)*4);
    printf("Your fine is : %d",fine);
  }
  else if(late_days>=0){
    fine = late_days*2;
    printf("Your fine is : %d",fine);
  }
  else{
    printf("No fine");
  }
    return 0;
}