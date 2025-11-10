#include<stdio.h>
#include<math.h>
int main(){
    float cost_price,selling_price,profit_percentage,loss_percentage;
    printf("Enter Cost Price and Selling Price:");
    scanf("%f %f",&cost_price,&selling_price);
    if(selling_price > cost_price){
        profit_percentage = ((selling_price - cost_price)/cost_price)*100;
        printf("Profit Percentage is : %f",profit_percentage);
    }
    else if(cost_price > selling_price){
        loss_percentage = ((cost_price - selling_price)/cost_price)*100;
        printf("Loss Percentage is : %f",loss_percentage);
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;

}
