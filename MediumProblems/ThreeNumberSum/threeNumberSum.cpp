#include  <vector>
#include  <algorithm>

std::vector<std::vector<int>> threeNumberSum(std::vector<int> array, int targetSum)
{
    std::sort(array.begin(), array.end());
    std::vector<std::vector<int>> output{};
    for (size_t i = 0; i < array.size() - 1; i++)
    {
        int left = 1 + i;
        int right = array.size() - 1;
        while (left < right)
        {
            int currentSum = array[i] + array[left] + array[right];
            if (currentSum == targetSum)
            {
                output.push_back({ array[i],array[left],array[right] });
                ++left;
                --right;
            }
            else if (currentSum < targetSum)
            {
                ++left;
            }
            else
            {
                --right;
            }
        }
    }
    return output;
}
int main()
{


}