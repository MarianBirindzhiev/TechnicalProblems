#include <iostream>
#include <string_view>
#include <vector>

int singleNumber(std::vector<int>& nums) 
{
    int singleNumber = 0;
    for (const auto& a : nums)
    {
        singleNumber ^= a; //4^4=0
    }
    return singleNumber;
}

int main()
{
    std::cout << "Hello World!\n";
    
}
