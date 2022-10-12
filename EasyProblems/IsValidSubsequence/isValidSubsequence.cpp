#include <iostream>
#include <string_view>
#include <vector>

bool isValidSubsequence(std::vector<int> array, std::vector<int> sequence) {
    int sequanceIndex{ 0 };
    for (int arrayIndex = 0; arrayIndex < array.size(); arrayIndex++)
    {
        if (array[arrayIndex] == sequence[sequanceIndex])
        {
            ++sequanceIndex;
        }
    }
    return sequanceIndex == sequence.size();
}
int main()
{
    std::vector<int> v{ 5,1,22,25,6,-1,8,10 };
    std::vector<int> s{ 1,6,-1,10 };
    std::cout << isValidSubsequence(v, s);

}