#include <iostream>
#include "Matrix.h"

int main() {
    Matrix<int> mi(5,5);
    std::cout << "mi size = " << mi.size() << std::endl;
    mi[0][0] = 3;
    std::cout << "mi[0][0] = " << mi[0][0] << std::endl;
    mi[4][1] = 99;
    std::cout << "mi[4][1] = " << mi[4][1] << std::endl;
    std::cout << std::endl;

    Matrix<char> mc(6,3);
    mc[0][2] = 'p';
    mc[0][3] = 'i';
    mc[5][2] = ' ';
    mc[2][3] = '=';
    mc[1][1] = 33;
    std::cout << mc[0][2] << mc[0][3] << mc[5][2] << mc[2][3] << mc[5][2];

    Matrix<double> md(2,2);
    md[1][1] = 3.14;
    std::cout << md[1][1];

    std::cout << mc[1][1];
}