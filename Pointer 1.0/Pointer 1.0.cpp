#include <iostream>

int func(int a, int b)
{
	return a + b;
}

void show(int* arr, int size) //same as (int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << *(arr + i) << ' '; //same as (std::cout << arr[i] << '\n';
	std::cout << '\n';
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	{
		int a = 10;
		int* ptr = &a;

		std::cout << ptr << '\n';
		std::cout << *ptr << '\n';
		std::cout << &ptr << '\n';
	}
	
	{
		int arr[5]{ 1,2,3,4,5 };
		std::cout << arr << '\n';
		std::cout << &arr[0] << '\n';
		std::cout << *arr << '\n';
		std::cout << arr[0] << '\n';
	}

	{
		int a = 5;
		int* ptr1 = &a;
		int** ptr2 = &ptr1;
		int*** ptr3 = &ptr2;

		std::cout << ptr1 << ' ' << ptr2 << ' ' << ptr3 << '\n';
	}

	{
		std::cout << &func << '\n';		//address
		std::cout << func << '\n';		//address
		std::cout << func(17, 8) << '\n';	//call a func

		int (*ptr)(int, int) = func;

		std::cout << ptr(17, 8) << '\n';
	}

	{
		const int a = 10;
		int b = 5;
		int c = 2;

		const int* ptr1 = &a; // pointer to const
		int* const ptr2 = &b; // const pointer
	}

	{
		int* ptr = nullptr; // nullptr represents a null pointer (perferred over NULL or 0)
		std::cout << ptr << '\n';
	}

	{
		int a = 10;
		double b = 5.5;
		void* ptr;

		ptr = &a;
		std::cout << ptr << '\t' << *static_cast<int*>(ptr) << '\n';

		ptr = &b;
		std::cout << ptr << '\t' << *static_cast<double*>(ptr) << '\n';
	}

	{
		double arr[] = { 1,2,3 };
		double *ptr1;
		double *ptr2;

		ptr1 = arr;
		std::cout << "ptr1 -> " << ptr1 << '\n';
		std::cout << "ptr1 + 1 -> " << ptr1 + 1 << '\n';
		std::cout << "ptr1 + 2 -> " << ptr1 + 2 << '\n';

		ptr2 = &arr[2];
		std::cout << "ptr2 -> " << ptr2 << '\n';
		std::cout << "ptr2 - 1 -> " << ptr2 - 1 << '\n';
		std::cout << "ptr2 - 2 -> " << ptr2 - 2 << '\n';

		std::cout << "ptr2 - ptr1 -> " << ptr2 - ptr1 << '\n';
	}

	{
		int arr[3] = { 1,2,3 };
		show(arr, 3);
	}
	
	{
		int a = 5, b = 10;
		std::cout << a << '\t' << b << '\n';
		swap(&a, &b);
		std::cout << a << '\t' << b << '\n';
	}

	return 0;
}