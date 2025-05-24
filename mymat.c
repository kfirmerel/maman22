#include "mymat.h"

void read_mat()
{

    
}
void print_mat(mat *MAT)
{
    int i, j;
    printf("Matrix:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%f ", (*MAT)[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}
void add_mat(mat *a, mat *b, mat *c)
{
    int i, j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            (*c)[i][j] = (*a)[i][j] + (*b)[i][j];
        }
    }
}
void sub_mat(mat *a, mat *b, mat *c)
{
    int i, j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            (*c)[i][j] = (*a)[i][j] - (*b)[i][j];
        }
    }
}
void mul_mat()
{

}
void mul_scalar(mat *a, double scalar, mat *b)
{
    int i, j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            (*b)[i][j] = (*a)[i][j] * scalar;
        }
    }
}
void trans_mat()
{

}

void remove_tabs(char input[])
{
    char temp [MAX_STRING_LENGTH]; /* Temporary array to hold the modified string */
    int i = 0;
    int counter = 0; /* Iterate through the input string and copy non-tab characters to temp */
    for (i = 0; i < MAX_STRING_LENGTH; i++)
    {
        temp[i] = '\0'; /* Initialize the temporary array */
    }
    i = 0; /* Reset index for input string */

    while (input[i] != '\0')
    {
        if (input[i] != '\t')
        {
            temp[counter] = input[i];
            i++;
            counter++;
        }
        else
        {
            i++;
        }
        
    }
    temp[counter] = '\0'; /* Null-terminate the string */
    strcpy(input, temp);
}