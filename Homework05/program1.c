/**
 * Project      : HW05
 * Name         : John Schatzl
 * Date         : 11/24/22
 *
 * Approach     : I started by taking the size of the array as input
 * and then creating a pointer to the array and allocated the correct
 * amount of memory to the array relative to its length. Then, I 
 * started looping through from i to n to get each pArr[i] from
 * user input. Then I looped again from i to n to calculate the
 * sum of each entry in the array, and printed.
 *
 * Challenges   : One of the challenges I had was still getting 
 * used to pointer syntax, such as memory allocation and casting.
 * I also completely forgot the part about "freeing" the memory.
 *
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i, n, sum = 0;
    scanf("%d", &n); // Size of the array taken from user input.
    int *pArr = (int *) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) { // Taking the actual array as user input.
        scanf("%d", &pArr[i]);
    }
    for (i = 0; i < n; i++) { // Computing the sum of the elements in array.
        sum += pArr[i];
    }
    printf("%d", sum);
    free(pArr); // Free the memory.
    return 0;
}