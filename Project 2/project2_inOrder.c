// Name: Long Do
// UID: U16884284
// Description: The program will indicate if input characters are in order or not

#include <stdio.h>
#include <ctype.h> 

int main()
{
    char prev;
    char curr = 'a';

    printf("Enter input: ");

    do{
        // The tolower() function is to lowercase each character from the input
        curr = tolower(curr);

        // The isalpha() function is to check if the character is alphabetical or not
        if (!isalpha(curr)) {
            printf("invalid input\n");
            return 0;
        }

        if (curr < prev) {
            printf("not in order\n");
            return 0;
        }

        prev = curr;

    // The getchar() function will read through each character from the input
    }while((curr = getchar()) != '\n');

    printf("in order\n");

    return 0;
}