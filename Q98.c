//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char name[MAX];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Formatted Name: ");
    int n = strlen(name);
    if (n > 0 && name[0] != ' ') {
        printf("%c. ", name[0]); 
    }
    for (int i = 1; i < n; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            if (name[i + 2] == ' ' || name[i + 2] == '\0') {
                printf("%s", &name[i + 1]); 
                break; 
            } else {
                printf("%c. ", name[i + 1]); 
            }
        }
    }
    printf("\n");
    return 0;
}