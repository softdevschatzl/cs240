/**
 * Project: Homework 03
 * Name: John Schatzl
 * Date: 10/30/22
 * 
 * Approach: I began by initializing all the variables
 * given to zero to prohibit errors in functionality
 * and then I simply took the percentage as an average
 * of all the scores sum and used that to compare between
 * set values described in the comments to display a grade.
 * 
 * Challenges: Only challenge I had was calculating percentage
 * and figuring out what I actually had to do. Pretty vague.
*/
#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, sum;
    m1 = 0; m2 = 0; m3 = 0, m4 = 0; m5 = 0; sum = 0;
    float percentage = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d (out of 100): ", i + 1);
        scanf("%d", &m1);
        sum += m1;
        percentage = sum / 5;
    }
    printf("Total Marks = %d\n", sum);
    
    // percentage >= 90% : A
    // percentage >= 80% : B
    // percentage >= 70% : C
    // percentage >= 65% : D
    // percentage  < 65% : F
    if (percentage >= 90) {
        printf("Grade A");
    } else if (percentage >= 80 && percentage <= 89) {
        printf("Grade B");
    } else if (percentage >= 70 && percentage <= 79) {
        printf("Grade C");
    } else if (percentage >= 65 && percentage <= 69) {
        printf("Grade D");
    } else {
        printf("Grade F");
    }
    return 0;
}