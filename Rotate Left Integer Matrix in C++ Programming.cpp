#include<iostream>
using namespace std;
void rotateMatrix(int** &matrix, int rows, int cols)
{
	int temp = matrix[0][0];
	//for 0th row
	for (int i = 0; i < cols - 1; i++)
	{
		matrix[0][i] = matrix[0][i + 1];
	}
	//for last column
	for (int i = 0; i < rows - 1; i++)
	{
		matrix[i][cols - 1] = matrix[i + 1][cols - 1];
	}

	//for last row
	for (int i = cols - 1; i > 0; i--)
	{
		matrix[rows - 1][i] = matrix[rows - 1][i - 1];
	}

	//for first column
	for (int i = rows - 1; i > 0; i--)
	{
		matrix[i][0] = matrix[i - 1][0];
	}

	matrix[1][0] = temp;
}
void Display(int** matrix, int rows, int cols)
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
		
	}
}
int main()
{	
	int rows = 5, cols = 5;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin>> matrix[i][j];
		}
	}

	Display(matrix, rows, cols);

	rotateMatrix(matrix, rows, cols);

	cout << "\nAfter Rotation:";
	Display(matrix, rows, cols);



	
	system("pause");
	return 0;
}
