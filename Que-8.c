#include <stdio.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num == (int)num) {
        printf("The number is an integer.\n");
    }
    else {
        printf("The number is a real number.\n");
    }

    return 0;
}
