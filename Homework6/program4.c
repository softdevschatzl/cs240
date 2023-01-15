/**
 * Name: John Schatzl
 * 
 * Date: 12/6/22
 * 
 * Approach: This was a very simple program, simply using structs
 * in lieu of regular integers and operations. I began by filling
 * out the addDistance function making sure to test and see that
 * it was referencing the right values of the distance struct.
 * Then I just read each input from the command line corresponding
 * to feet and inches.
 * 
 * Challenges: One challenge I had was referencing materials
 * for the syntax for referencing a value of a struct. Also, forgetting
 * to cover the case in which inches are greater than 11 and 
 * converting that to one more foot.
*/

#include <stdio.h>

struct distance
{
    int feet;
    int inch;
};

void addDistance(struct distance d1, struct distance d2)
{
    struct distance d3;
    
    // TODO: calculate the sum of distance d1 and d2
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    if (d3.inch > 11) {
        d3.feet += 1;
        d3.inch -= 12;
    }

    printf("Total distance - Feet: %d, Inches: %d", d3.feet, d3.inch);
}

int main()
{
    struct distance d1, d2;

    printf("Enter the distance in feet & inches from your house to nearest T-station: ");
    // TODO: read the values
    scanf("%d %d", &d1.feet, &d1.inch);

    printf("Enter the distance in feet & inches from T-station to UMass Boston: ");
    // TODO: read the values
    scanf("%d %d", &d2.feet, &d2.inch);

    addDistance(d1, d2);

    return 0;
}