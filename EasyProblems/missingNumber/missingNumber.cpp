#include <iostream>
#include <vector>
#include <string>

int missingNumber(std::vector<int>& nums)
{
    int sum = 0;
    int nElements = 0;

    for (int a : nums)
    {
        sum += a;
        ++nElements;
    }

    return (nElements * (nElements + 1)) / 2 - sum;
}

int main()
{
    
}


