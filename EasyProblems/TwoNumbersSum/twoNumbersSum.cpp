#include <iostream>
#include <string_view>
#include <vector>
#include  <algorithm>

std::vector<int> twoNumberSum(std::vector<int> arr, int targetSum) {
    std::sort(arr.begin(), arr.end());
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int currentSum = arr[start] + arr[end];
        if (currentSum == targetSum)
        {
            return { arr[start],arr[end] };
        }
        else if (currentSum < targetSum)
            ++start;
        else
            --end;
    }
    return {};
}
int main()
{
    std::vector<int> v{ 3,5,-4,8,11,1,-1,6 };
    std::vector<int> finalV{ twoNumberSum(v,10) };
    for (auto i : finalV)
        std::cout << i << ' ';
}