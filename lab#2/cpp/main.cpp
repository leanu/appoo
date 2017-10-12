#include "matrix.h"
#include "matrix.cpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    matrix *M, *N;
    int i;
    cout<<"Introdu dimensiunea matricelor:";
    cin>>i;
    M = new matrix(i);
    N = new matrix(i);
    cout<<"Introdu prima matrice"<<endl;
    M->input();
    cout<<"Introdu a doua matrice"<<endl;
    N->input();
    cout<<"Ati introdus:"<<endl;
    M->output();
    N->output();
    return 0;
}
