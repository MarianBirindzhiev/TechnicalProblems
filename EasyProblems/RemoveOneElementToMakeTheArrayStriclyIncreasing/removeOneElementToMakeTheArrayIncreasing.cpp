#include <iostream>
#include <string_view>
#include <vector>
//doesnt work
bool canBeIncreasing(std::vector<int>& nums) 
{
	int counter = 0; 
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i]<nums[i-1])
		{
			if (counter==1)
			{
				return false;
			}
			if (i>=2 &&nums[i-2]>=nums[i])
			{
				nums[i] = nums[i - 1];
			}
			++counter;
		}
	}

	return counter <= 2;
}

int main()
{
	std::vector<int> v{ 2,3,1,2};
	std::cout << canBeIncreasing(v);
    
}
