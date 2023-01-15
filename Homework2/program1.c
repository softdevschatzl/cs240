/**
 * Project      : HW02
 * Name         : John Schatzl
 * Date         : 10/14/22
 *
 * Approach     : I started by initializing my variables
 * count, i and j to keep track of where the elements are at,
 * and used count as a temp variable when moving around the 
 * elements.
 *
 * Challenges   : For some reason I couldn't find why the
 * specified inputs were returning much larger numbers.
 *
 *
 */

#include <stdio.h>

void sort_numbers_ascending(int numbers[], int count)
{
    // TODO: sort the array in ascending order
    int n = count;
    int i, j;
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (numbers[i] > numbers[j]){
                count = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = count;
            }
        }
    }
    // print the sorted array
    for (int i = 0; i < count; ++i)
        printf("%d\n", numbers[i]);
}

int main()
{
    int i = 0, count;

    // TODO: read count
    scanf("%d", &count);

    int numbers[count];
    
    // TODO: read numbers
    while (i < count) {
        scanf("%d", &numbers[i]);
        i++;
    }

    sort_numbers_ascending(numbers, count);
    
    return 0;
}