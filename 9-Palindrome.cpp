// Palindrome numbers that read the same as backward as forward
#include <iostream>
using namespace std;
class Solution
{
public:
	bool isPalindrome(int n)
	{
		if (n < 0)
		{
			return false;
		}
		int rev = 0;
		int num, digit(0);
		num = n;
		do
		{
			digit = num % 10;
			rev = (rev * 10) + digit;
			num = num / 10;
		} while (num != 0);
		if (rev == n)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
int main()
{
}