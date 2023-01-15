/**
 * Project      : HW04
 * Name         : John Schatzl
 * Date         : 11/15/22
 *
 * Approach     : I started by declaring a count variable i
 * to initialize our start number in the prime finding
 * process. Then I just incremented out from variable 
 * while it was < to in order to go through each
 * number in our interval, and used isprime to flag
 * whether or not from is a prime number, and then print
 * that number following a newline character.
 *
 * Challenges   : Being used to for loops, this process
 * took some time to digest and figure out.
 *
 *
 */

#include <stdio.h>
#include <math.h>

void primeNumbers(int from, int to)
{
    // Todo: Implement this function using while loop
    int i;
    while(from <= to) {
        int start = sqrt(from);
        i = 2;
        int isprime = 1;
        while (i <= start) {
            if (from % i == 0) {
                isprime = 0;
                break;
            }
            i++;
        }
        if (isprime) {
            printf("%d\n", from);
        }
        from++;
    }
}

int main()
{
    int from, to;
    printf("enter from: ");
    scanf("%d", &from);

    printf("enter to: ");
    scanf("%d", &to);

    // Todo: Print all prime numbers between from and to
    // each prime number should be printed on a new line
    primeNumbers(from, to);
    return 0;
}