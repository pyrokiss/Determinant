#include <iostream>
#include "test10.h"
#include "Matrix.h"
using namespace std;

int main() {
    Matrix M;
    M.printMatrix(matr, N);
    cout << "Determinant: " << M.determinantOfMatrix(matr, N) << endl;
    return 0;
}