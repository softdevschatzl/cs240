/**
 * Project      : HW01
 * Name         : John Schatzl
 * Date         : 9/17/22
 * 
 * Approach     : I approached this problem by using the sizeof()
 * function to get the byte size of each data type, and string
 * formatting to display the size in the command line.
 * 
 * Challenges   : Nothing other than having to remember the order
 * of output for each data type.
 * 
 * 
 */
#include <stdio.h>

int main() {
    int i;
    char c;
    float f;
    double d;
    printf("Size of char:%2d byte\n", sizeof(c));
    printf("Size of int:%2d bytes\n", sizeof(i));
    printf("Size of float:%2d bytes\n", sizeof(f));
    printf("Size of double:%2d bytes\n", sizeof(d));
    return 0;
}