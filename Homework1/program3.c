/**
 * Project      : HW01
 * Name         : John Schatzl
 * Date         : 9/17/22
 * 
 * Approach     : I approached this problem by declaring a char c,
 * and then I used the scanner to read the input from the command
 * line and used the printf statement to convert the character to
 * its ASCII value and display it.
 * 
 * Challenges   : Had a tough time trying to figure out how C displays
 * ASCII characters and found out that converting it to decimal through
 * the printf statement would become my solution.
 * 
 * 
 */
#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    printf("ASCII value of character %c is %d\n", c, c);
    return 0;
}