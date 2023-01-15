/**
 * Project      : HW04
 * Name         : John Schatzl
 * Date         : 11/15/22
 *
 * Approach     : I began by defining two helper functions,
 * factorial() and rowCalc() which helped me to condense calculations
 * to ease readability and help the client understand the program.
 * I then started in main as reading the number of rows
 * and then creating a nested for loop that calculated
 * each row individually using my helper function rowCalc.
 * To fill in the empty space and format the triangle correctly,
 * once j became equal to rows - i I simply printed empty space.
 * then as the rows grew, I printed the values of the triangle.
 *
 * Challenges   : Biggest challenges were figuring out how to
 * calculate the rows and also how to format the triangle correctly
 * adding new line characters and empty space.
 *
 *
 */

#include <stdio.h>
int factorial (int rows) {
    int i;
    for (i = 1; rows > 1; rows--) {
        i *= rows;
    }
    return i;
}

int rowCalc(int n, int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}
int main()
{
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i <= rows; i++) {
        for (j = 0; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf(" %d", rowCalc(i, j));
        }
        printf("\n");
    }
    return 0;
}
