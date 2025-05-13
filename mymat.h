#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <math.h>

typedef float mat[4][4];


void read_mat();
void print_mat(mat *MAT);
void add_mat(mat *a, mat *b, mat *c); 
void sub_mat(mat *a, mat *b, mat *c);
void mul_mat();
void mul_scalar(mat *a, double scalar, mat *b);
void trans_mat();
