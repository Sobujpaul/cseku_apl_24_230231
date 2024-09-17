#include<stdio.h>

// Prototype of Function
int RecursiveProduct(int start, int end);

int main() {
    // Call the RecursiveProduct function
    int product = RecursiveProduct(1, 10);

    // Output the result
    printf("%d", product);

    return 0;
}

// Function to recursively calculate the product
int RecursiveProduct(int start, int end) {
    //If start is greater than end, return 1
    if(start == end + 1) {
        return 1;
    }
    //  Multiply current number by the result of the next call
    else {
        return start * RecursiveProduct(start + 1, end);
    }
}

