#include <iostream>
#include <string_view>

bool isPalindrome(int x) 
{
	long long int reverse = 0;
	long long int oldNumber = x;
	int digit;

	if (x<0)
	{
		return false;
	}

	do
	{
		digit = x % 10;
		reverse = (reverse * 10) + digit;
		x /= 10;
	} while (x != 0);

	return reverse == oldNumber;
}

int main()
{
	std::cout << isPalindrome(234432);
}
