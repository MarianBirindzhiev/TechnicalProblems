#include <iostream>
#include <vector>
#include  <algorithm>

int nonConstructibleChange(std::vector<int> coins)
{
	std::sort(coins.begin(), coins.end());
	int currentSum{ 0 };
	if (coins.size() == 0 || coins[0] > 1)
	{
		return 1;
	}
	for (int index = 0; index < coins.size(); index++)
	{
		if (coins[index] > currentSum + 1)
		{
			return currentSum + 1;
		}
		else
		{
			currentSum += coins[index];
		}
	}
	return currentSum + 1;;
}

int main()
{
	std::vector<int> v{};
	std::cout << nonConstructibleChange(v);
}