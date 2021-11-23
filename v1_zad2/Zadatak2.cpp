#include <iostream>
#include <iomanip>
using namespace std;

struct matrix
{
	int rows;
	int cols;
	float** mat;

	float** createMatrix()
	{
		float** newmatrix = new float*[rows];
		for (int i = 0; i < rows; i++)
		{
			newmatrix[i] = new float[cols];
		}
		return newmatrix;
	}

	float** enterDataIntoMatrix()
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				std::cout << "unesite element [" << i << "][" << j << "]" << std::endl;

				std::cin >> mat[i][j];
			}
		}
		return mat;
	}

	void displayMatrix()
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				std::cout << mat[i][j] << " ";
			}
			std::cout << std::endl;
		}

		std::cout << std::endl;

	}

	void generatematrixinrange()
	{
		matrix result;
		int from = 0, to = 0;

		std::cout << "Enter number of rows:" << std::endl;
		std::cin >> result.rows;

		std::cout << "Enter number of cols:" << std::endl;
		std::cin >> result.cols;

		result.mat = result.createMatrix();

		std::cout << "Range from:" << std::endl;
		std::cin >> from;

		std::cout << "Range to:" << std::endl;
		std::cin >> to;

		for (int i = 0; i < result.rows; i++)
		{
			for (int j = 0; j < result.cols; j++)
			{
				result.mat[i][j] = from + rand() % (to - from) + 1;
			}
		}

		result.displayMatrix();
	}

	float** add(matrix secondmatrix)
	{
		if (rows != secondmatrix.rows || cols != secondmatrix.cols)
		{
			std::cout << "Matrix are different dimensions" << std::endl;
			return mat;
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				mat[i][j] += secondmatrix.mat[i][j];
			}
		}
		return mat;
	}

	float** subtract(matrix secondmatrix)
	{
		if (rows != secondmatrix.rows || cols != secondmatrix.cols)
		{
			std::cout << "Matrix are different dimensions" << std::endl;
			return mat;
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				mat[i][j] -= secondmatrix.mat[i][j];
			}
		}
		return mat;
	}

	void multiply(matrix secondmatrix)
	{
		matrix mult;
		mult.rows = rows;
		mult.cols = secondmatrix.cols;
		mult.mat = mult.createMatrix();

		if (cols != secondmatrix.rows) {
			std::cout << "Invalid matrix lenght, matrix not chained." << std::endl;
			return;
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < secondmatrix.cols; j++)
			{
				mult.mat[i][j] = 0;

				for (int k = 0; k < cols; k++)
				{
					mult.mat[i][j] += mat[i][k] * secondmatrix.mat[k][j];
				}
			}
		}

		mult.displayMatrix();
	}

	void transpose()
	{
		matrix result;

		result.rows = cols;
		result.cols = rows;
		result.mat = result.createMatrix();


		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				result.mat[i][j] = 0;
				result.mat[i][j] = mat[j][i];
			}
		}

		result.displayMatrix();
	}

};

int main()
{
	matrix firstMatrix;
	matrix secondMatrix;

	//std::cout << "Enter number of rows:" << std::endl;
	//std::cin >> firstMatrix.rows;

	//std::cout << "Enter number of cols::" << std::endl;
	//std::cin >> firstMatrix.cols;

	//firstMatrix.mat = firstMatrix.createMatrix();
	//firstMatrix.enterDataIntoMatrix();

	//firstMatrix.displayMatrix();

	//std::cout << "Enter number of rows:" << std::endl;
	//std::cin >> secondMatrix.rows;

	//std::cout << "Enter number of cols:" << std::endl;
	//std::cin >> secondMatrix.cols;

	//secondMatrix.mat = secondMatrix.createMatrix();
	//secondMatrix.mat = secondMatrix.enterDataIntoMatrix();

	//secondMatrix.displayMatrix();

	firstMatrix.generatematrixinrange();
	//firstMatrix.mat = firstMatrix.add(secondMatrix);
	//firstMatrix.mat = firstMatrix.subtract(secondMatrix);
	//firstMatrix.multiply(secondMatrix);
	//firstMatrix.transpose();
	//firstMatrix.displayMatrix();

}