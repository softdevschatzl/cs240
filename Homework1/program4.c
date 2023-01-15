/**
 * Project      : HW01
 * Name         : John Schatzl
 * Date         : 9/17/22
 * 
 * Approach     : 
 * 
 * Challenges   :
 * 
 * 
 */

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is a positive number\n", num);
    } else if (num == 0) {
        printf("%d is neither positive nor negative\n", num);
    } else {
        printf("%d is a negative number\n", num);
    }
    return 0;
}