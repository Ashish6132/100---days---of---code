//Print the initials of a name.
#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char name[MAX];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Initials: ");
    int n = strlen(name);
    if (n > 0 && name[0] != ' ') {
        printf("%c", name[0]); 
    }
    for (int i = 1; i < n; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]); 
        }
    }
    printf("\n");
    return 0;
}