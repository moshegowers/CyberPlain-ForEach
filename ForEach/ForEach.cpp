#include <iostream>
#include <functional>

template <typename T, typename FUNC>
void ForEach(T *arr, size_t arrLen, FUNC func)
{
	for (size_t i = 0; i < arrLen; i++)
	{
		func(arr[i]);
	}
}

void main(void)
{
	int intArray[10];
	for (size_t i = 0; i < 10; i++)
	{
		intArray[i] = i;
	}
	std::cout << "The values in array is:" << std::endl;
	ForEach(intArray, 10, [](auto x) { std::cout << x << " "; });
	std::cout << '\n';

	double doubleArray[10];
	double sum = 0;
	for (size_t i = 0; i < 10; i++)
	{
		doubleArray[i] = i * 2.5;
	}
	ForEach(doubleArray, 10, [&sum](auto x) { return sum += x; });
	std::cout << "The sum of values in array is: " << sum << std::endl;

}