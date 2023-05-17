#include <stdio.h>

int isPerfect(int number) {
    int sum = 0;
    
    // Find the sum of proper divisors
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    
    // Check if the number is perfect
    if (sum == number) {
        return 1; // Number is perfect
    } else {
        return 0; // Number is not perfect
    }
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 0;
    }
    
    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
    
    return 0;
}
