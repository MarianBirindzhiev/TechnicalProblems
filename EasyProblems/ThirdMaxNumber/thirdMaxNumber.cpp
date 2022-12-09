#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int thirdMax(vector<int>& nums) {

    std::sort(nums.begin(), nums.end(),greater<>());
    std::queue<int> s;
    s.push(nums[0]);
    for (const auto& num : nums)
    {
        if (num < s.back())
            s.push(num);
        if (s.size() == 3)
            return s.back();
    }
    return s.front();
}

int main()
{
    std::vector<int> a{ 1,1,2 };
    std::cout<<thirdMax(a);
}


