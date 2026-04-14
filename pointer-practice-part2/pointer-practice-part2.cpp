#include <iostream>

template <typename T>
const T* find(const T* begin, const T* end, const T& value)
{
	for (const T* i = begin; i < end; i++)
		if (*i == value)
			return i;
	return nullptr;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int value = 2;
	const int* address = find(arr, (arr + 5), value);
	std::cout << address;
}