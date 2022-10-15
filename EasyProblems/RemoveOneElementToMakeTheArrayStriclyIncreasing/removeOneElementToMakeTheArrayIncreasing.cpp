#include <iostream>
#include <string_view>
#include <vector>

//Given a 0 - indexed integer array nums, return true if it can be made strictly increasing after removing exactly one element, 
//false otherwise.If the array is already strictly increasing, return true.
//The array nums is strictly increasing if nums[i - 1] < nums[i] for each index(1 <= i < nums.length).


bool canBeIncreasing(std::vector<int>& nums) 
{
    int count = 0;
    for (int i = 1; i < nums.size(); i++) 
    {
        if (nums[i] <= nums[i - 1]) 
        {

            if (count == 1)
            {
                return false;
            }

            if (i >= 2 && nums[i - 2] >= nums[i])
            {
                nums[i] = nums[i - 1];
            }
            ++count;
        }
    }

    return count <= 1;
}

int main()
{
	std::vector<int> v{ 2,3,1,2};
	std::cout << canBeIncreasing(v);
    
}
