#include <iostream>

template <typename T> void swap(T* a, T* b);
template <typename T> void swap(T arr1[], T arr2[], int size);
template <typename T> void printArrays(T arr1[], T arr2[], int size);
template <typename T> void printArr(T arr[], int size);

int main()
{
	double a = 10, b = 5;
	std::cout << "a = " << a << "\tb = " << b << '\n';
	swap(&a, &b);
	std::cout << "a = " << a << "\tb = " << b << "\n\n";

	const int SIZE = 4;
	double arr1[SIZE]{ 1.5,2.5,3.5,4.5 }, arr2[SIZE]{ 0.3,0.8,1.7,2.7 };
	printArrays(arr1, arr2, SIZE);
	swap(arr1, arr2, SIZE);
	printArrays(arr1, arr2, SIZE);

	return 0;
}

template <typename T>
void swap(T* a, T* b)
{
	T temp = *a;
	*a = *b;
	*b = temp;
}

template <typename T>
void swap(T arr1[], T arr2[], int size)
{
	T temp;
	for (int i = 0; i < size; i++)
	{
		swap(&arr1[i], &arr2[i]);
	}
}
template <typename T>
void printArrays(T arr1[], T arr2[], int size)
{
	std::cout << "Array #1 - ";
	printArr(arr1, size);
	std::cout << "Array #2 - ";
	printArr(arr2, size);
	std::cout << '\n';
}
template <typename T>
void printArr(T arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
}