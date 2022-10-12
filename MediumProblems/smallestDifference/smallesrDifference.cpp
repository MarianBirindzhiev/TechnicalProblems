#include <vector>
#include <algorithm>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) 
{
    std::sort(arrayOne.begin(), arrayOne.end());
    std::sort(arrayTwo.begin(), arrayTwo.end());
    int idxOne = 0;
    int idxTwo = 0;
    int current = INT_MAX;
    int smallest = INT_MAX;
    std::vector<int> smallestPair;

    while (idxOne<arrayOne.size()&&idxTwo<arrayTwo.size())
    {
        int firstNumber = arrayOne[idxOne];
        int secondNumber = arrayTwo[idxTwo];
        if (firstNumber>secondNumber)
        {
            current = firstNumber - secondNumber;
            ++idxTwo;
        }
        else if (firstNumber < secondNumber)
        {
            current = secondNumber - firstNumber;
            ++idxOne;
        }
        else
        {
            return std::vector<int>{firstNumber, secondNumber};
        }

        if (current < smallest)
        {
            smallest = current;
            smallestPair={ firstNumber,secondNumber };
        }
        return smallestPair;
    }
}