

#include <iostream>
using namespace std;
const int SIZE = 8;
int BinarySearch(int arr[], int);

int main()
{
	int arr[SIZE] = { 8,10,12,21,27,34,42 };//Sorted Array//
	
	int key;
	int middle;
	cout << "Enter Key to find:";
	cin >> key;
	if (BinarySearch(arr, key) != -1)
	{
		cout << "Key found at index:" << BinarySearch(arr, key);
	}
	else
	{
		cout << "\nUnable to Find Key....";
	}
	system("pause");
	
}
int BinarySearch(int arr[], int key)
{
	int s = 0;
	int e = SIZE;
	int middle;
	while (s < SIZE)
	{
		middle = (s + e) / 2;
		if (key == arr[middle])
		{
			return middle;
		}
		else if (key < arr[middle])
		{
			e = middle;
		}
		else if (key > arr[middle])
		{
			s = middle;
			e = SIZE;

		}
	}
	return -1;
}


