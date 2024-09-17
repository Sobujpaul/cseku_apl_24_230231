#include <stdio.h>

int main() {
    char inputChar;  // Variable for character input from the user


    printf("Enter a character: ");
    scanf("%c", &inputChar);

    // Check if the input character is a vowel (both uppercase and lowercase)
    if (inputChar == 'A' || inputChar == 'E' || inputChar == 'I' ||
        inputChar == 'O' || inputChar == 'U' ||
        inputChar == 'a' || inputChar == 'e' || inputChar == 'i' ||
        inputChar == 'o' || inputChar == 'u') {
        printf("Vowel\n");         // Output if the character is a vowel
    } else {
        printf("Consonant\n");    // Output if the character is not a vowel
    }

    return 0;
}

