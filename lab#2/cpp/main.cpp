#include "matrix.h"
#include "matrix.cpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    matrix *M, *N, *O;
    int i;
    cout<<"Introdu dimensiunea matricelor:";
    cin>>i;
    M = new matrix(i);
    N = new matrix(i);
    O = new matrix(i);
    cout<<"Introdu prima matrice"<<endl;
    M->input();
    cout<<"Introdu a doua matrice"<<endl;
    N->input();
    cout<<"Ati introdus:"<<endl;
    M->output();
    cout<<"a doua matrice:"<<endl;
    N->output();
    cout<<"suma matricelor:"<<endl;
    *O = *M + *N;
    O->output();
    cout<<"diferenta matricelor:"<<endl;
    *O = *M - *N;
    O->output();
    return 0;
}
