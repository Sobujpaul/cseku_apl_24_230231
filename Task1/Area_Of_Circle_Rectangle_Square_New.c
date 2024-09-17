#include<stdio.h>

// Function prototypes for calculating areas
float calculateSquareArea(float side);
float calculateCircleArea(float radius);
float calculateRectangleArea(float length, float width);

int main(){

    float length = 5.0, width = 10.0;     // Dimensions for the rectangle
    float squareSide = 4.0;               // Side length of the square
    float circleRadius = 5.0;             // Radius of the circle

    // Output the areas of the shapes
    printf("Area of the square: %f\n", calculateSquareArea(squareSide));
    printf("Area of the circle: %f\n", calculateCircleArea(circleRadius));
    printf("Area of the rectangle: %f\n", calculateRectangleArea(length, width));

    return 0;
}

// Function to calculate the area of a square
float calculateSquareArea(float side) {
    return side * side;
}

// Function to calculate the area of a circle
float calculateCircleArea(float radius) {
    return 3.14 * radius * radius;
}

// Function to calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

