// Name: Long Do
// UID: U16884284
// Description: The program indicate if an input integer is special or not
#include <stdio.h>

// Function to check if number contains digit 3
int containsThree(int n) {
    while(n > 0) {
        if(n%10 == 3)
            return 1;
        n /= 10;
    }
    return 0;
}

int main() {
    int number;

    printf("Enter input: ");
    scanf("%d", &number);

    // This if condition check if the number satisfies first requirement: multiple of 3
    // and second requirement: contain 3
    if(number % 3 == 0 && containsThree(number))
        printf("yes");
    else
        printf("no");

    return 0;
}