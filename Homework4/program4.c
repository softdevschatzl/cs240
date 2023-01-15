/**
 * Project      : HW04
 * Name         : John Schatzl
 * Date         : 11/15/22
 *
 * Approach     : I began by covering the case that the value
 * we would convert would be zero, and then repeatedly dividing
 * the decimal number by two until we get to zero.
 *
 * Challenges   : My biggest challenge was figuring out the recursive
 * aspect of the problem and how we could repeat the
 * process to get our desired result.
 *
 *
 */

#include <stdio.h>

long convertToBinary(int);

int main()
{
    long binaryNum;
    int decimalNum;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    binaryNum = convertToBinary(decimalNum);
    printf("%d in Binary is: %ld\n", decimalNum, binaryNum);
    return 0;
}

long convertToBinary(int decimalNum)
{
    // Todo: Write a recursive function to convert a decimal number to binary
    if (decimalNum == 0) {
        return 0;
    }
    return (decimalNum % 2 + 10 * convertToBinary(decimalNum / 2));
}