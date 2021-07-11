#pragma once
#include <iostream>
#include "define10.h"

using namespace std;

class Matrix
{
public:
	void printMatrix(float matrix[N][N], int size);
	float determinantOfMatrix(float matrix[N][N], int size);
private:
	void subMatrix(float matrix[N][N], int size, float temp[N][N], int p, int q);
};

