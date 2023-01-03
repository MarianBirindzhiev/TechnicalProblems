#include <iostream>
#include <vector>
#include <string>

int mySqrt(int x) 
{
	if (x == 1) return 1;
	int answer=0;

	for (size_t i = 1; i <= x/2; i++)
	{
		if (x / i < i) break;
		answer = i;
	}
	return answer;
}

int main()
{
    
}


