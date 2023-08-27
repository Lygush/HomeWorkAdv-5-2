#pragma once

#include "Array.h"

template<class N>
class Matrix {
    int row{};
    int col{};
    Array<N>* matrix;
public:
    Matrix(int row, int col) {
        this->row = row;
        this->col = col;
        matrix = new Array<N>[row];
        for (int i{}; i < row; ++i) {
            matrix[i] = Array<N>(col);
        }
    }

    ~Matrix() {
        delete[] matrix;
    }

    const int size() {
        return row * col;
    }

    const Array<N> operator[](int i) const{
        return matrix[i];
    }

    Array<N>& operator[](int i) {
        return matrix[i];
    }
};