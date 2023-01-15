/**
 * Project      : HW02
 * Name         : John Schatzl
 * Date         : 10/14/22
 *
 * Approach     : I simply just initialized a variable l,
 * to store the largest number and iterated through
 * and set l to the number higher than the previous value
 * until reaching the end.
 *
 * Challenges   : Only challenge that I ran into was looping
 * to the array input.
 *
 *
 */

#include <stdio.h>

int largest_element(int numbers[], int num)
{
    // TODO: return the largest element in the array
    int l = numbers[0];
    int n = num;
    for (int i = 0; i < n; i++) {
        if (numbers[i] > l) {
            l = numbers[i];
        }
    }
    return l;
}

int main()
{
    int count;
    // TODO: read count
    scanf("%d", &count);

    int numbers[count];
    
    // TODO: read numbers
    int i = 0;
    while (i < count) {
        scanf("%d", &numbers[i]);
        i++;
    }

    printf("%d\n", largest_element(numbers, count));

    return 0;
}