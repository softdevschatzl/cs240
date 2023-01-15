/**
 * Project      : HW04
 * Name         : John Schatzl
 * Date         : 11/15/22
 *
 * Approach     : I began by initializing an isprime
 * variable to flag whether or not i is a prime number
 * in my loop. I then used nested loops to compare
 * j and i to find if i is a prime or not, and then
 * printed i following a newline character.
 *
 * Challenges   : Not too challenging, only problem
 * I ran into was the comparison process and having
 * to initialize j as two to avoid any issues.
 *
 *
 */

#include <stdio.h>

void primeNumbers(int from, int to)
{
    int isprime = 0;
    // Todo: Implement this function using for loop
    for (int i = from; i < to; i++) {
        isprime = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isprime = 1;
                break;
            }
        } if (isprime == 0) {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int from, to;
    printf("Enter from: ");
    scanf("%d", &from);

    printf("Enter to: ");
    scanf("%d", &to);

    // Todo: Print all prime numbers between from and to
    // each prime number should be printed on a new line
    primeNumbers(from, to);
    return 0;
}