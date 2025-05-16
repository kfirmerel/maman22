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
