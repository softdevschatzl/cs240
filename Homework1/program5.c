/**
 * Project      : HW01
 * Name         : John Schatzl
 * Date         : 9/21/22
 * 
 * Approach     : I approached this problem by intializing three variables
 * the first and second inputted integers, and the operation inputted in 
 * the middle of these two integers, along with the result. Then I simply 
 * used if else statements to determine the operation and execute it.
 * 
 * Challenges   : Had a small bit of trouble finding how to use the scanner
 * function to read the inputted integers and characters.
 * 
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc[], char* argv) {
    int a = argc[0];
    int b = argc[1];
    char * o = argv;

    if (*o == '+') {
        printf("Result: %d\n", (a + b));
    } else if (*o == '-') {
        printf("Result: %d\n", (a - b));
    }
    return 0;
}