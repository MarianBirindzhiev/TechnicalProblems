#include <iostream>
#include <vector>
#include<algorithm>

std::vector<int> sortedSquaredArray(std::vector<int> array) {
	std::vector<int> sortedSquare(array.size(), 0);
	int start = 0;
	int end = array.size() - 1;
	for (int index = array.size() - 1; index >= 0; --index)
	{
		if (std::abs(array[start]) > std::abs(array[end]))
		{
			sortedSquare[index] = array[start] * array[start];
			++start;
		}
		else
		{
			sortedSquare[index] = array[end] * array[end];
			--end;
		}
	}
	return sortedSquare;
}

int main()
{
	std::vector<int>v{ -5,-3,-1,2,4,6,8,9 };
	std::vector<int> b{ sortedSquaredArray(v) };
	for (auto a : b)
	{
		std::cout << a << ' ';
	}
}