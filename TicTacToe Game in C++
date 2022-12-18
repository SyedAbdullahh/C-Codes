#include<iostream>
using namespace std;
const int SIZE1 = 3;
bool row_check(char arr[][SIZE1],char &symbol)
{
	int flag;
	for (int i = 0; i < SIZE1; i++)
	{
		int temp_flag = 1;
		char cur = arr[i][0];
		for (int j = 0; j < SIZE1; j++)
		{
			if (arr[i][j] != cur)
			{
				temp_flag = 0;
				break;
			}
		}
		if (temp_flag)
		{
			symbol = cur;
			return true;
		}
	}
	return false;
}
bool column_check(char arr[][SIZE1], char& symbol)
{
	int flag;
	for (int i = 0; i < SIZE1; i++)
	{
		int temp_flag = 1;
		char cur = arr[i][0];
		for (int j = 0; j < SIZE1; j++)
		{
			if (arr[j][i] != cur)
			{
				temp_flag = 0;
				break;
			}
		}
		if (temp_flag)
		{
			symbol = cur;
			return true;
		}
	}
	return false;
}
bool diagonal_check(char arr[][SIZE1], char& symbol)
{
	char curr = arr[0][0];
	int flag;
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE1; j++)
		{
			if (i == j && (arr[i][j] != curr))
			{
				
				return false;
			}
		}

	}
	symbol = curr;
	return true;

}
bool diagonal_check2(char arr[][SIZE1], char& symbol)
{
	char curr = arr[0][SIZE1-1];
	int flag;
	int j = SIZE1 - 2;
	for (int i = 1; i < SIZE1; i++)
	{
		if (curr != arr[i][j])
		{
			return false;
		}
		j--;
	}
	symbol = curr;
	return true;

}

void IsSymbolWinner(char arr[][SIZE1], char& symbol)
{
	if (row_check(arr, symbol))
	{
		cout <<endl<< symbol << " wins...";
	}
	else if (column_check(arr, symbol))
	{
		cout << endl << symbol << " wins...";
	}
	else if (diagonal_check(arr, symbol))
	{
		cout << endl << symbol << " wins...";
	}
	else if (diagonal_check2(arr, symbol))
	{
		cout << endl << symbol << " wins...";
	}
	
	else
	{
		cout << "\n No One Wins...";
	}
}

void input_arr(char arr[][SIZE1])
{
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE1; j++)
		{
			cout << "\n Enter Value for[" << i << "][" << j << "]:";
			cin >> arr[i][j];
		}
	}
}
void main()
{
	char arr[SIZE1][SIZE1];
	char symbol;
	input_arr(arr);
	IsSymbolWinner(arr, symbol);

	
}
