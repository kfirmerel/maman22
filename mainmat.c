#include "mymat.h"

int main(int argc, char *argv[]) 
{
    mat MAT_A, MAT_B, MAT_C, MAT_D, MAT_E, MAT_F; 
    int i, j;
    char input[MAX_STRING_LENGTH];
    char temp[MAX_STRING_LENGTH];
    char *command = &input[0];


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

   
     printf("please enter a command: ");
    fgets(input, sizeof(input), stdin); /* Read input */
    input[strcspn(input, "\n")] = 0;
    remove_tabs(input); /* Remove any trailing newline or tab characters */
    command = strtok(input, " "); 

    while (strcmp(command, "stop") != 0)
    {
        if (strcmp(command,"read_mat") == 0)
        {
            printf("read_mat");
        }
        if (strcmp(command,"print_mat") == 0)
        {
            printf("print_mat");
        }
        if (strcmp(command,"add_mat") == 0)
        {
            printf("add_mat");
        }
        if (strcmp(command,"sub_mat") == 0)
        {
            printf("sub_mat");
        }
        if (strcmp(command,"mul_mat") == 0)
        {
            printf("mul_mat");
        }
        if (strcmp(command,"mul_scalar") == 0)
        {
            printf("mul_scalar");
        }
        if (strcmp(command,"trans_mat") == 0)
        {
            printf("trans_mat");
        }
        
        printf("\nplease enter a new command: ");
        fgets(input, sizeof(input), stdin); /* Read input */
        input[strcspn(input, "\n")] = 0;
        remove_tabs(input); /* Remove any trailing newline or tab characters */
        strcpy(temp, input);
        command = strtok(temp, " ");
        
    }
    
    printf("stop command received, happy to help\n"); 

    return 0;  
}