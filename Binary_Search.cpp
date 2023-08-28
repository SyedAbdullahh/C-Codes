bool BinarySearch(int* arr, int size, int num)
{
	int low = 0, high=size;
	while (low < high)
	{
		if (num == arr[high / 2])
		{
			return true;
		}
		else if (num < arr[high / 2])
		{
			high = high / 2;
		}
		else if (num > arr[high / 2])
		{
			low = high / 2;
		}
	}
	return false;
}
