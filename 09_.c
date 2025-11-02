#include <stdio.h>
#include <math.h>  // For pow() function

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;

    // --- User Inputs ---
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    
    simple_interest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    
    printf("\nSimple Interest = %.2f", simple_interest);
    printf("\nCompound Interest = %.2f\n", compound_interest);

    return 0;
}