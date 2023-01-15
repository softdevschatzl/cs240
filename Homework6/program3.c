/**
 * Name: John Schatzl
 * 
 * Date: 12/6/22
 * 
 * Approach: I began by setting result to one, and creating a base case
 * for my recursive function by making the function return the value of 
 * result when p = 0. Then, I rescursively called the function times the base,
 * and decremented p to eventually bring it to our base case. Then
 * I just read each input for base and power.
 *  
 * Challenges: One challenge I faced was when I was trying to figure out
 * how to formulate the recursive part of the funtion. I first thought
 * that decrementing a new integer (say i) to the same tune as p,
 * but figured it would only add another step when I can just
 * decrement p itself.
*/

#include <stdio.h>

// function for calculating power
int getPower(int b, int p)
{
    int result = 1;
    // TODO: calculate the power of b^p
    // store the result in result variable
    // Use recursion to calculate the power

    // Base case to return one when p = 0, meaning 
    // that the exponential is 0 calculating to 1.
    if (p == 0) {
        return result;
    }
    // Recursive case that calculates the base times
    // b raised to the power - 1, which will eventually
    // bring us to out base case.
    result = b * getPower(b, p - 1);
    return result;
}
int main()
{
    int base, power;
    int result;

    printf("Enter value of base: ");
    // TODO: read the value of base
    scanf("%d", &base);

    printf("Enter value of power: ");
    // TODO: read the value of power
    scanf("%d", &power);

    result = getPower(base, power);

    printf("%d to the power of %d is: %d\n", base, power, result);

    return 0;
}