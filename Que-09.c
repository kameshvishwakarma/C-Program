#include <stdio.h>

int main() {
    int num;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is natural or not
    if (num <= 0) {
        printf("%d is not a natural number.\n", num);
    } else {
        printf("%d is a natural number.\n", num);
    }

    return 0;
}
