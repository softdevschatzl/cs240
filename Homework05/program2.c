/**
 * Project      : HW05
 * Name         : John Schatzl
 * Date         : 11/25
 *
 * Approach     : I began by creating a pointer variable tok to serve as
 * each separate token of the sentence. Then, I created a while loop to
 * execute, printing each token it finds until it reaches a NULL token.
 *
 * Challenges   : One challenge I had with this was I first tried to
 * use a for loop to iterate from each token, which didn't work.
 * Next was creating a base case for the while loop to end, 
 * trying to figure out how to make it reach a NULL token.
 *
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    //Write your logic to print the tokens of the sentence here.
    int n = strlen(s); // Length of the sentence.
    char * tok = strtok(s, " ");
    while (tok != NULL) { // Loop that iterates through the sentence until a token is NULL.
        printf("%s \n", tok);
        tok = strtok(NULL, " ");
    }
    return 0;
}