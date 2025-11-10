#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary representation of %d is: ", num);
    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1; 
        printf("%d", bit);
    }
    printf("\n");
    return 0;
}