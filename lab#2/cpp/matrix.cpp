#include "matrix.h"
#include <iostream>
#include <iomanip>

using namespace std;
//default constructor
matrix::matrix() {
    size = 1;
    A = new long* [1];
    A[0] = new long;
    A[0][0]=0;
};
//constructor with size
matrix::matrix(int n) {
    int i, j;
    size = n;
    A = new long* [n];
    for(i=0; i<n; i++){
        A[i]=new long[n];
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++) {A[i][j]=0; }
    }
};

//destructor
matrix::~matrix() {
    int i;
    for(i=0; i<size; i++) {
        delete [] A[i];
    }
    delete [] A;
};

void matrix::input() {
    int i, j;
    long k;
    for(i=0; i<size; i++){
        for(j=0; j<size; j++) {
            cout<<"A["<<i<<"]["<<j<<"]:"; 
            cin>>k;
            A[i][j]=k;
        }
    }
};

void matrix::output() {
    int i, j;
    for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            cout<<"\t"<<A[i][j];
        }
        cout<<endl;
    }
};

matrix& matrix::operator+(matrix& B) {
    int i, j;
    if(size!=B.size) {
        cout<<"ERROR: Matricile au dimensiuni diferite";
        return *this;
    }
    for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            A[i][j]+=B.A[i][j];
        }
    }
    return *this;
}
