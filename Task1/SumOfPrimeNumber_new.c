#include <stdio.h>

int main() {
    int numbers[5];  // Array to hold 5 integers
    int i, j;
    int sum = 0;     // Variable to store the sum of all prime numbers
    int isPrime;     // Flag to check if a number is prime
    int currentNumber; // To store the current number being checked

    // Input 5 integers from the user
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d",&numbers[i]);
    }

    // Process each number in the array
    printf("Prime numbers in the array are:\n");
    for (i = 0; i < 5; i++) {
        currentNumber = numbers[i];
        isPrime = 1;       // Assume currentNumber is prime initially

        // Check if currentNumber is a prime number
        if (currentNumber <= 1) {
            isPrime = 0;       // Numbers less than or equal to 1 are not prime
        } else {
            for (j = 2; j < currentNumber; j++) {
                if (currentNumber % j == 0) {
                    isPrime = 0;        // currentNumber is divisible by j, so it's not prime
                    break;
                }
            }
        }

        // If currentNumber is prime, print it and add currentNumber to the sum
        if (isPrime) {
            printf("%d ", currentNumber);
             sum += currentNumber;
        }



    }

    // Print the total sum of all prime numbers
    printf("\nSum = %d\n", sum);

    return 0;
}

