#include"Matrix.hpp"
#include<iostream>

int main(int argc, char **argv){
    matrix *A;  // Matriz A
    matrix *B;  // Matriz B
    int RA, CA; // dimensiones de la matriz A
    int RB, CB; // dimenciones de la matriz B
    cout<<"Ingrese el número de filas de la matriz A: ";
    cin>>RA;
    cout<<"Ingrese el número de columnas de la matriz A: ";
    cin>>CA;
    A = createMatrix(RA, CA);
    
    for(int i0 = 0; i0<A->rows;++i0){
        for(int j0 = 0; j0<A->cols;++j0){
            cout<< "ingrese el valor A[" <<i0<<","<<j0<<"]:";
            cin>>A->data[i0][j0];
        }
        cout<<endl;
    }
    printMatrix(A);
    cout<<"Ingrese el número de filas de la matriz B: ";
    cin>>RB;
    cout<<"Ingrese el número de columnas de la matriz B: ";
    cin>>CB;
    B = createMatrix(RB,CB);

    for(int i0 = 0; i0<B->rows;++i0){
        for(int j0 = 0; j0<B->cols;++j0){
            cout<< "ingrese el valor B[" <<i0<<","<<j0<<"]:";
            cin>>B->data[i0][j0];
        }
        cout<<endl;
    }
    printMatrix(B);

    matrix *C; // Matriz resultante A + B
    matrix *D; // Matriz resultante A*B

    C = sumMatrix(A,B);
    if(C!=NULL){
        cout<<"Resultado de la Suma"<<endl;
        printMatrix(C);
    }
    D = mulMatrix(A,B);
    if(D!=NULL){
        cout<<"Resultado de la Multiplicación"<<endl;
        cout<<"Dimension de la matriz resultante "<<D->rows 
            <<" x "<<D->cols<<endl;
        printMatrix(D);
    }
    deleteMatrix(A);
    deleteMatrix(B);
    if(C!=NULL){
        deleteMatrix(C);
    }
    if(D!=NULL){
        deleteMatrix(D);
    }


    return 0;
}