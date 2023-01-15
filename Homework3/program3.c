/**
 * Project: Homework 03
 * Name: John Schatzl
 * Date: 10/30/22
 * 
 * Approach: I began by creating a nested loop comparing
 * each string in the string array to the previous and finding
 * whether they are in alphabetical order. Then, using
 * a temp variable I switched the order of them in the
 * array until they were in the correct order using strcmp
 * and strcpy for comparison and rearrangement respectively.
 * 
 * Challenges: Biggest challenge was thinking of a way to
 * rearrange the strings in the array to fit lexicographical
 * order. The other challenge was figuring out whether the
 * output listed in the writeup was actually lexicographical
 * order. Very confusing.
*/
#include <stdio.h>
#include <string.h>

int main()
{
   char str[5][50], temp[50];
   
   // Getting strings input
   for (int i = 0; i < 5; ++i)
   {
      printf("Enter word (%d): ");
      scanf("%s", str[i]);
   }

   // TODO: sorting strings in the lexicographical order
   for (int i = 0; i < 5; i++) {
      for (int j = i + 1; j < 5; j++) {
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 5; ++i)
   {
      printf("%s\n", str[i]);
   }
   return 0;
}