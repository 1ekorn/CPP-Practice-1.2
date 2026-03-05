#include <iostream>

// Prints numbers in range [num1, num2]
void printRange(int num1, int num2)
{
	if (num1 > num2)
		return;
	std::cout << num1 << ' ';
	printRange(num1 + 1, num2);

}

// Returns sum of digits
int sumDigits(int number)
{
	if (number == 0)
		return 0;
	return number % 10 + sumDigits(number / 10);
}

// Prints number in reversed order
void showReversed(int number)
{
	if (number == 0)
		return;
	std::cout << number % 10;
	showReversed(number / 10);
}

// Prints array elements
void showElements(int arr[], int size)
{
	if (size == 0)
		return;
	showElements(arr, size - 1);
	std::cout << arr[size - 1] << ' ';
}

// Returns sum of array elements
int sumElements(int arr[], int size)
{
	if (size == 0)
		return 0;
	return arr[size - 1] + sumElements(arr, size - 1);
}

int main()
{
	const int SIZE = 6;
	int arr[SIZE]{ 1,2,3,4,5, 6 };
	int number = 12;

	std::cout << "Numbers in range from 1 to 5: \n";
	printRange(1, 5);
	std::cout << '\n';

	std::cout << "Number 77, sum of its digits: " << sumDigits(77) << '\n';

	std::cout << "Number: " << number << "\nNumber in reversed order: ";
	showReversed(number);
	std::cout << '\n';

	std::cout << "Elements of the array: \n";
	showElements(arr, SIZE);
	std::cout << '\n';

	std::cout << "Sum of these elements: " << sumElements(arr, SIZE) << '\n';

	return 0;
}