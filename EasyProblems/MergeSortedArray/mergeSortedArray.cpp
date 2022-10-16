#include <iostream>
#include <string_view>
#include <vector>


void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) 
{
    int length = m + n - 1;
    int nums1Idx = m - 1;
    int nums2Idx = n - 1;

    while (nums2Idx>=0)
    {
        if (nums1Idx>=0 && nums1[nums1Idx]>nums2[nums2Idx])
        {
            nums1[length] = nums1[nums1Idx];
            --length;
            --nums1Idx;
        }
        else
        {
            nums1[length] = nums2[nums2Idx];
            --length;
            --nums2Idx;
        }
    }
}

int main()
{
    std::vector<int>v{ 1,2,3,0,0,0 };
    std::vector<int>b{ 2,5,6 };
    merge(v, 3, b, 3);
    for (auto x : v)
    {
        std::cout << x << ' ';
    }
    
}
