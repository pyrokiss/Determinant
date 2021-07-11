#include "Matrix.h"

void Matrix::printMatrix(float matrix[N][N], int size)
{
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

void Matrix::subMatrix(float matrix[N][N], int size, float temp[N][N], int p, int q)
{
    int i = 0, j = 0;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row != p && col != q) {
                temp[i][j++] = matrix[row][col];
                if (j == size - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

float Matrix::determinantOfMatrix(float matrix[N][N], int size)
{
    float determinant = 0;
    if (size == 1) {
        return matrix[0][0];
    }
    if (size == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }
    float temp[N][N], sign = 1;
    for (int i = 0; i < size; i++) {
        subMatrix(matrix, size, temp, 0, i);
        determinant += sign * matrix[0][i] * determinantOfMatrix(temp, size - 1);
        sign = -sign;
    }
    return determinant;
}
