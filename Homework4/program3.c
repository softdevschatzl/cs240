/**
 * Project      : HW04
 * Name         : John Schatzl
 * Date         : 11/15/22
 *
 * Approach     : I started by writing an if statement
 * that simply found that if string still exists, and no
 * endline character is found, print the strings last character.
 *
 * Challenges   : Finding a way to print the string without
 * iterating through it and decrementing the count.
 *
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX 100
void stringReverse(char str[])
{
    // Todo: Write a recursive function to reverse a string
    if (*str) {
        stringReverse(str + 1);
        printf("%c", *str);
    }
}

int main()
{
    char str[MAX], *revstr;

    printf("Input any string: ");
    scanf("%s", str);

    stringReverse(str);
    printf("\n");

    return 0;
}