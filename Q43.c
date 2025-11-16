//  strong number
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int num, originalNum, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += factorial(remainder);
        originalNum /= 10;
    }
    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}