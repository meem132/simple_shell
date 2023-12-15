#include <stdio.h>  // Including the standard input-output header file for functions like printf.
#include <stdbool.h>  // Including the standard boolean header file for using the bool type.

/**
 * Checks if a given string, betty, is equal to "Betty".
 *
 * @param betty: The string to check.
 * @return: True if the string is equal to "Betty", false otherwise.
 */
bool isBetty(const char* betty) {
    // Comparing the given string with "Betty" using the strcmp function.
    // If the result is 0, it means the strings are equal.
    return strcmp(betty, "Betty") == 0;
}

// Usage example for isBetty

int main() {
    // Example 1: Check if the string "Betty" is equal to "Betty".
    const char* betty1 = "Betty";
    printf("Example 1:\n");
    printf("Is Betty? %s\n\n", isBetty(betty1) ? "Yes" : "No");

    // Example 2: Check if the string "betty" is equal to "Betty".
    const char* betty2 = "betty";
    printf("Example 2:\n");
    printf("Is Betty? %s\n\n", isBetty(betty2) ? "Yes" : "No");

    // Example 3: Check if the string "BETTY" is equal to "Betty".
    const char* betty3 = "BETTY";
    printf("Example 3:\n");
    printf("Is Betty? %s\n\n", isBetty(betty3) ? "Yes" : "No");

    return 0;
}