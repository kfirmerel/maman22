#include "mymat.h"

int main(int argc, char *argv[]) 
{
    mat MAT_A, MAT_B, MAT_C, MAT_D, MAT_E, MAT_F; 
    int i, j, flag_proper_input = 0;
    char input[MAX_STRING_LENGTH];
    char temp[MAX_STRING_LENGTH];
    char *command = &input[0];
    char *last = &input[0];


    for(i=0; i<4; i++) /* Initialize matrices to zero */
    {
        for(j=0; j<4; j++)
        {
            MAT_A[i][j] = 0;
            MAT_B[i][j] = 1;
            MAT_C[i][j] = 2;
            MAT_D[i][j] = 3;
            MAT_E[i][j] = 4;
            MAT_F[i][j] = 5;
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
            flag_proper_input = 1;
            command = strtok(NULL, " "); /* Get the next token */
            switch (which_mat(command)) /* Determine which matrix to read */
            {
                case 'A':
                    read_mat(&MAT_A);
                    break;
                case 'B':
                    read_mat(&MAT_B);
                    break;
                case 'C':
                    read_mat(&MAT_C);
                    break;
                case 'D':
                    read_mat(&MAT_D);
                    break;
                case 'E':
                    read_mat(&MAT_E);
                    break;
                case 'F':
                    read_mat(&MAT_F);
                    break;
                default:
                    printf("Invalid matrix name, please try again.\n");
            }
        }
        if (strcmp(command,"print_mat") == 0)
        {
            flag_proper_input = 1;
            command = strtok(NULL, " ");
            last = strtok(NULL, " ");
            if(strcmp(last,"") != 0)
            printf("%s\n",last);

            switch (which_mat(command))
            {
                case 'A':
                    print_mat(&MAT_A);
                    break;
                    case 'B':
                    print_mat(&MAT_B);
                    break;
                case 'C':
                    print_mat(&MAT_C);
                    break;
                case 'D':
                    print_mat(&MAT_D);
                    break;
                case 'E':
                    print_mat(&MAT_E);
                    break;
                case 'F':
                    print_mat(&MAT_F);
                    break;
                default:
                    printf("Invalid matrix name, please try again.\n");
            }

        }
        if (strcmp(command,"add_mat") == 0)
        {
            printf("add_mat");
            flag_proper_input = 1;
        }
        if (strcmp(command,"sub_mat") == 0)
        {
            printf("sub_mat");
            flag_proper_input = 1;
        }
        if (strcmp(command,"mul_mat") == 0)
        {
            printf("mul_mat");
            flag_proper_input = 1;
        }
        if (strcmp(command,"mul_scalar") == 0)
        {
            printf("mul_scalar");
            flag_proper_input = 1;
        }
        if (strcmp(command,"trans_mat") == 0)
        {
            printf("trans_mat");
            flag_proper_input = 1;
        }
        if (flag_proper_input == 0)
        {
            printf("Invalid command, please try again.\n");
        }
        flag_proper_input = 0; /* Reset flag for next command */
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