#include <iostream>
#include <string_view>
#include <vector>
#include <algorithm>

//Given a sorted array of distinct integersand a target value, return the index if the target is found.
// If not, return the index where it would be if it were inserted in order.
//You must write an algorithm with O(log n) runtime complexity.

int searchInsert(std::vector<int>& nums, int target) 
{
    int returnIdx = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]==target)
        {
            return i;
        }
        else if (nums[i]<target)
        {
            ++returnIdx;
        }
    }
    return returnIdx;
}

int main()
{
    std::vector<int> v{ 1,3,5,6 };
    std::cout << searchInsert(v, 7);
    
}
