#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <iostream>

class matrix
{
    private:
        long **A;
        int size;
    public:
        matrix();
        matrix(int n);
        void set(int row, int col, long k);
        matrix& operator+(matrix& B);
        matrix& operator-(matrix& B);
        void operator^(matrix& B);// transpusa
        ~matrix();
        void input();
        void output();
};

#endif // MATRIX_H_INCLUDED
