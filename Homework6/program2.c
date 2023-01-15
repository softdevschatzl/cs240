/**
 * Name: John Schatzl
 * 
 * Date: 12/6/22
 * 
 * Approach: I began by reading the size and number of elements in array a, then to get
 * the second largest element in the array, I arranged it in ascending order with 
 * bubble sort, then returned the second to last element in the array.
 * 
 * Challenges: Only challenge I had was to figure out the trick to finding the second
 * largest element in the array. 
*/

#include <stdio.h>

int main()
{
    int a[50], n, i, j = 0, lrg, lrg2nd;

    printf("Enter the size of array: ");
    // TODO: read the size of array
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    // TODO: read n elements into array a
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // TODO: get the second largest value in the array
    // store the second largest value in lrg2nd
    // Use bubble sort to sort the array in ascending order.
    int temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // Then it is a simple matter of the second largest
    // element in the array being the second to last
    // element in the array.
    lrg2nd = a[n - 2];
    printf("The Second largest element in the array is:  %d", lrg2nd);
    return 0;
}