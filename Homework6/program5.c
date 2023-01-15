/**
 * Name: John Schatzl
 * 
 * Date: 12/6/22
 * 
 * Approach: I began by reading the required inputs using scanf
 * and then starting on the query aspect of the program,
 * I used the number of queries to fix the loop init and increment
 * and compared each element of the query to the stored data.
 * 
 * Challenges: Only challenge I found was with the comparing of the 
 * query to the given grade. I tried doing so with brute force, using
 * simple query == sj.grade but this did not work, and found out
 * I need to compare each element [0] to [0] and [1] to [1] to 
 * effectively compare the two, because a c- is not a c+.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[50];
    char grade[5];
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    // TODO: read the number of students
    scanf("%d", &n);

    // create a student record
    struct student *s = (struct student *)malloc(n * sizeof(struct student));
    printf("Enter the name and grade of %d students: ", n);
    for (int i = 0; i < n; i++)
    {
        // TODO: read the name and grade of each student
        scanf("%s %s", &s[i].name, &s[i].grade);
    }

    // number of queries
    int q;
    printf("Enter the number of queries: ");
    // TODO: read the number of queries
    scanf("%d", &q);

    // search for the queries
    char query[5];
    // TODO: fix the loop init, condition, and increment
    for (int i = 0; i < q; i++)
    {
        printf("Query by grade: ");
        // TODO: read the query
        scanf("%s", &query);

        int found = 0;
        for (int j = 0; j < n; j++)
        {
            // TODO: compare the query with the name of the student
            // if the query matches the name of the student
            // print the name of the student
            // TODO: add condition to the if statement
            if (query[0] == s[j].grade[0] && query[1] == s[j].grade[1])
            {
                // print student name
                printf("%s", s[j].name);
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("Not found");
        }
        printf("\n");
    }
    return 0;
}