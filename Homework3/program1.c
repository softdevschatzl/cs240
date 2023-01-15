/**
 * Project: Homework 03
 * Name: John Schatzl
 * Date: 10/30/22
 * 
 * Approach: First began by allocating the memory of
 * size n to the doctor structure, and then read name
 * and specialization for the structure. Then I read
 * the number of queries from the user input, and 
 * used strcmp to compare the query to the stored
 * information about the doctors.
 * 
 * Challenges: Only notable challenge I faced was from
 * forgetting how to correctly compare strings between
 * user input and the stored pb[].specialization.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct doctor
{
    char specialization[50];
    char name[50];
};

int main()
{
    // number of entries in the doctor
    int n;
    printf("Enter the number of doctors: ");
    scanf("%d", &n);

    // create a doctor
    struct doctor *pb = malloc(n); // TODO: allocate memory for n doctors
    printf("Enter the name and specialization of the doctors: ");
    char specialization[50];
    char name[50];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", pb[i].name, pb[i].specialization); // TODO: read name and specialization
    }

    // number of queries
    int query_count;
    printf("Enter the number of queries: ");
    scanf("%d", &query_count); // TODO read number of queries

    // search for the queries
    for (int i = 0; i < query_count; i++)
    {
        char query[50];
        printf("Enter the query (%d): ", i + 1);
        scanf("%s", &query[i]);
        int found = 0;

        for (int j = 0; j < n; j++)
        {
            if (strcmp(query, pb[j].specialization) == 0) // TODO fix the condition
            {
                printf("Result (%d): %s\n", i + 1, pb[j].name);
                found = 1;
                break;
            }
        }
        if (found == 0) // TODO fix the condition
        {
            printf("Result (%d): Not found\n", i + 1);
        }
    }
    return 0;
}