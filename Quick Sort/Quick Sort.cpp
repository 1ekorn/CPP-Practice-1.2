#include <iostream>

template<typename T>
int partition(T arr[], int min, int max)
{
	T pivot = arr[max-1];

	int i = min - 1;
	
	for (int j = min; j <= (max - 1); j++)
	{
		if (arr[j] <= pivot) {
			i++;
			std::swap(arr[i], arr[j]);
		}
	}
	std::swap(arr[max - 1], arr[i + 1]);
	
	return i + 1;
}

template<typename T>
void quickSort(T arr[], int min, int max)
{
	if (min < max)
	{
		int pivot = partition(arr, min, max);
		quickSort(arr, pivot + 1, max);
		quickSort(arr, min, pivot - 1);
	}
}
template<typename T>
void printArr(T arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
}

int main()
{
	const int SIZE = 5;
	int arr[SIZE]{ 2, 1, 5, 6, 3 };
	printArr(arr, SIZE);

	quickSort(arr, 0, SIZE - 1);
	printArr(arr, SIZE);
}