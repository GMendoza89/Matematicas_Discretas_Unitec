#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<iostream>
using namespace std;
typedef struct _matrix
{
    int rows;
    int cols;
    float **data;
}matrix;

matrix  *createMatrix(int R, int C);
void deleteMatrix(matrix *m);
void printMatrix(matrix *m);

matrix *sumMatrix(matrix *A,matrix *B);
matrix *mulMatrix(matrix *A,matrix *B);


#endif