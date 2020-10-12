
#include <stdio.h>

int main()
{
    int i, j, N;

    /* Input number of rows from user */
    do{
    printf("Enter number of rows: ");
    scanf("%d", &N);}while(N<=0); //Numer of roes and column should be greater than 0

    /* Iterate through N rows */
    for(i=1; i<=N; i++)
    {
        printf("%d. ",i); //Print number of rows
        /* Iterate over columns */
        for(j=1; j<=N; j++)
        {
            /* Print star for each column */
            printf("*");
        }
        
        /* Move to the next line/row */
        printf("\n");
    }

    return 0;
}
