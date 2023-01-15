/**
 * Project      : HW02
 * Name         : John Schatzl
 * Date         : 10/14/22
 *
 * Approach     : I began by inserting string by string into str3
 * starting with looping through str1 and inserting it 
 * and doing the same for str2. Then, finished by adding the
 * end-line character to the string.
 *
 * Challenges   : Only challenge was realizing I had to insert
 * each string separately.
 *
 *
 */

#include <stdio.h>
int main()
{
    char str1[50], str2[50], str3[100];
    int i = 0;
    int j = 0;
    // TODO: scanf str1 and str2
    scanf("%s", str1);
    scanf("%s", str2);
    
    // TODO: concatenate str1 and str2 into str3
    // without using strcat()

    // Insert first str1 into str3.
    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }
    // Insert str2 into str3.
    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    
    printf("%s\n", str3);
    // output: word1word2

    return 0;
}