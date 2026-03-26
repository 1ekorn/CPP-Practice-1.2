#include <iostream>
#include <algorithm>

template<typename T>
bool binarySearch(T arr[], int size, T key)
{
	int leftBound = 0, rightBound = size - 1;
	int middle;

	do {
		middle = (leftBound + rightBound) / 2;
		if (key == arr[middle])
			return true;
		else if (key > arr[middle])
			leftBound = middle + 1;
		else
			rightBound = middle - 1;
	} while (leftBound <= rightBound);
	
	return false;
}

int main()
{
	int arr[] = { 6,2,5,1,3,5,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int key = 4;

	

	std::sort(arr, arr + size);
	std::cout << (binarySearch(arr, size, key) ? "Element is in the arr!\n" : "Element isn't in the arr!\n");

	return 0;
}