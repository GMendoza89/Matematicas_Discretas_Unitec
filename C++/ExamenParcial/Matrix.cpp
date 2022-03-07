#include"Matrix.hpp"


matrix *createMatrix(int R, int C){
    matrix *M;
    M = new matrix;
    M->rows = R;
    M->cols = C;
    M->data = new float*[R];
    for(int i0 = 0; i0<R;++i0){
        M->data[i0]= new float[C];
    }
    return M;
}

void deleteMatrix(matrix *m){
    for(int i0 = 0; i0<m->rows; ++i0){
        delete(m->data[i0]);
    }
    delete(m->data);
    delete(m);
}

void printMatrix(matrix *m){
    for(int i0 = 0; i0<m->rows;++i0){
        for(int j0 = 0; j0<m->cols;++j0){
            cout<<m->data[i0][j0]<<", ";
        }
        cout<<endl;
    }
}

matrix *sumMatrix(matrix *A,matrix *B){
    if(A->rows != B->rows || A->cols != B->cols){
        cout<<"Error Las matrices son de diferentes dimensiones";
        cout<<endl;
        return NULL;
    }
    matrix *C;
    

    C =createMatrix(A->rows,A->cols);
    
    for(int i0 = 0; i0<C->rows;++i0){
        for(int j0 = 0; j0<C->cols;++j0){
            C->data[i0][j0] = A->data[i0][j0] + B->data[i0][j0];
        }
    }
    return C;
}
matrix *mulMatrix(matrix *A,matrix *B){
    if(A->cols != B->rows){
        cout<<"Error Las matrices no tienen dimensiones las dimensiones correctas";
        cout<<endl;
        return NULL;
    }

    matrix *C;
    C = createMatrix(A->rows, B->cols);
    for(int i0 = 0; i0<C->rows;++i0){
        for(int j0 = 0; j0<C->cols;++j0){
            for(int k0 = 0; k0 < A->cols;++k0){
                C->data[i0][j0] += A->data[i0][k0] * B->data[k0][j0];
            }   
        }
    }
    return C;
}