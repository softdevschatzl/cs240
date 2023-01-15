/**
 * Name: John Schatzl
 * 
 * Date: 12/6/22
 * 
 * Approach: I began by reading the number of items in list 1, then reading each individual entry,
 * and repeating the process for list 2. Then, to merge the two lists I created the first loop
 * to add elements of arr1 to arr3 normally, then using another loop starting at the n1 + ith element
 * of the array to add elements of arr2 to the end of arr3. Then for the sorting portion I used bubble
 * sort to swap elements in the array if they were out of order.
 * 
 * Challenges: Took me a second to figure out how to merge the two arrays effeciently. Other than that 
 * the rest was pretty simple just figuring out which sorting algorithm to use.
*/

#include <stdio.h>
#define MAX 50

int main()
{
    int arr1[MAX], arr2[MAX], arr3[MAX];
    int n1, n2, n3;
    int i, j, k;

    printf("Enter the number of items in list 1: ");
    // TODO: read the number of items in list 1
    scanf("%d", &n1);

    printf("Input %d items: ", n1);
    // TODO: read n1 items into arr1
    for (i = 0; i < n1; i++)
    {
      scanf("%d", &arr1[i]);
    }

    printf("Enter the number of items in list 2: ");
    // TODO: read the number of items in list 2
    scanf("%d", &n2);

    printf("Input %d items: ", n2);
    // TODO: read n2 items into arr2
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    n3 = n1 + n2;

    // TODO: merge arr1 and arr2 into arr3
    for (int i = 0; i < n1; i++)
        arr3[i] = arr1[i];
    for (int i = 0; i < n2; i++)
        arr3[n1 + i] = arr2[i];
    // TODO: sort array arr3 in decending order
    int temp;
    for (i = 0; i < n3; i++) {
        for (j = 0; j < n3 - 1 - i; j++) {
            if (arr3[j] < arr3[j + 1]) {
                temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
    // Print the merged array
    printf("The merged list in descending order is:\n");
    for (i = 0; i < n3; i++)
    {
        printf("%d   ", arr3[i]);
    }
    return 0;
}