#include "mymat.h"

int main(int argc, char *argv[]) 
{
    mat MAT_A, MAT_B, MAT_C, MAT_D, MAT_E, MAT_F; 
    int i, j;
   

    for(i=0; i<4; i++) /* Initialize matrices to zero */
    {
        for(j=0; j<4; j++)
        {
            MAT_A[i][j] = 0;
            MAT_B[i][j] = 0;
            MAT_C[i][j] = 0;
            MAT_D[i][j] = 0;
            MAT_E[i][j] = 0;
            MAT_F[i][j] = 0;
        }
    }

    
    
    add_mat(&MAT_A, &MAT_B, &MAT_C);
    sub_mat(&MAT_E, &MAT_F, &MAT_D);
    print_mat(&MAT_D);
    printf("how you doing?\n");
    return 0;  

    
}