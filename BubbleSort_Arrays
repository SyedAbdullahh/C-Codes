#include <iostream>
using namespace std;
int main()
{
	const int size = 6;
	int size1 = size - 1;
	int size2 = size - 2;
	int temp;
	int arr[size] = { 12,45,23,51,19,8 };
	//in bubble sort, the outer iterations for the whole array are equal to the number of values involved.
	for (int i= 0; i <= size1; i++)
	{
		for (int j = 0; j <= size2; j++)
		{
			if (arr[j]> arr[j+1])
			{
				temp = arr[j + 1];
				arr[j+1]=arr[j];
				arr[j] = temp;
			}
			
		}
		size2--;// After first iteration, the max value will automatically be stored at last index.
		//after 2nd iteration, 2nd lrg will be stored at 2nd last index and so on. So we dont need to check them again again, so we are doing size2-- because we dont want compiler to check them without need.
	}
	for (int p = 0; p <= size - 1; p++)
	{
		cout << arr[p] << ",";
	}
	system("pause");
}


