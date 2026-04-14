#include <iostream>

void initializeArr(int arr[], int size);
void showArr(int arr[], int size, void (*wayToShow)(int));
void showElementInSquareBrackets(int a);
void showElementInBrackets(int a);
void showElement(int a);

int main()
{
	const int SIZE = 5;
	int arr[SIZE];

	initializeArr(arr, SIZE);
	showArr(arr, SIZE, showElement);
	showArr(arr, SIZE, showElementInBrackets);
	showArr(arr, SIZE, showElementInSquareBrackets);

	return 0;
}

void initializeArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = std::rand() % 11;
}
void showArr(int arr[], int size, void (*wayToShow)(int))
{
	for (int i = 0; i < size; i++)
		wayToShow(arr[i]);
	std::cout << '\n';
}
void showElementInSquareBrackets(int a)
{
	std::cout << '[' << a << "] ";
}
void showElementInBrackets(int a)
{
	std::cout << '(' << a << ") ";
}
void showElement(int a)
{
	std::cout << a << ' ';
}