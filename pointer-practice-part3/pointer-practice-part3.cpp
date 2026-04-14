#include <iostream>

void selectionSort(int* begin, int* end)
{
	for (int* i = begin; i < end; i++)
	{
		int* index = i;
		for (int* j = i + 1; j < end; j++)
			if (*index > *j)
				index = j;
		if (index != i)
			std::swap(*i, *index);
	}
}
void printArr(int arr[], int size);


int main()
{
	int arr[5]{ 4,5,2,3,1 };
	printArr(arr, 5);

	selectionSort(arr, arr + 5);
	printArr(arr, 5);

	return 0;
}

void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
}