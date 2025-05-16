#include "mymat.h"

int main(int argc, char *argv[]) 
{
    mat MAT_A, MAT_B, MAT_C, MAT_D, MAT_E, MAT_F; 
    int i, j;
    char input[200];
    char temp[200];
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
    command = strtok(input, " "); 

    while (strcmp(command, "stop") != 0)
    {
        
        printf("Input: %s\n", input);
        printf("temp: %s\n", temp);
        printf("first input letter: %c\n", input[0]);
        printf("first temp letter: %c\n", temp[0]);
        printf("token: %s\n", command);

        printf("\nplease enter a command: ");
        fgets(input, sizeof(input), stdin); /* Read input */
        input[strcspn(input, "\n")] = 0;
        strcpy(temp, input);
        command = strtok(temp, " ");
        
    }
    
    printf("stop command received, happy to help\n");
    return 0;  
}