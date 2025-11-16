#include <stdio.h>
int main() {
    int arr[100], n, pos, value, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the value to delete: ");
    scanf("%d", &value);
    if (pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
    }
     else {
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[pos - 1] = value;
        n--;
        printf("Array after delation:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
