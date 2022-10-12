#include <iostream>
#include <vector>

//Given an array of integers, 1<=a[i]<=a[n](n=size of array), some elements appear twice and other appear once.
//Find all the elements that appear twice;

std::vector<int> findDublicates(std::vector<int> nums)
{
	std::vector<int> output{};
	for (int i = 0; i < nums.size(); i++)
	{
		int index = std::abs(nums[i]) - 1;
		if (nums[index] < 0)
		{
			output.push_back(index + 1);
		}
		nums[index] = -nums[index];
	}
	return output;
}


int main()
{
	std::vector<int> v{ findDublicates({ 4,3,2,7,8,2,3,1 }) };
	for (auto& a : v)
	{
		std::cout << a << ' ';
	}
}