#include <vector>
#include <algorithm>

bool classPhotos(std::vector<int> redShirtHeights, std::vector<int> blueShirtHeights)
{
	std::sort(redShirtHeights.begin(), redShirtHeights.end());
	std::sort(blueShirtHeights.begin(), blueShirtHeights.end());
	int red = 0;
	int blue = 0;
	for (int i = 0; i < redShirtHeights.size(); ++i)
	{
		if (redShirtHeights[i] > blueShirtHeights[i])
		{
			++red;
		}
		else if (redShirtHeights[i] < blueShirtHeights[i])
		{
			++blue;
		}
	}
	return red == redShirtHeights.size() || blue == blueShirtHeights.size();
}

int main()
{

}