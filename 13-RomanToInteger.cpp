#include<iostream>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        int a = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'I')
            {
                if (s[i + 1] != 'I' && i != s.size() - 1)
                {
                    a = a - 1;
                }
                else
                {
                    a = a + 1;
                }
            };
            if (s[i] == 'V')
            {
                a = a + 5;
            };
            if (s[i] == 'X')
            {
                if (s[i + 1] == 'L' || s[i + 1] == 'C' && i != s.size() - 1)
                {
                    a = a - 10;
                }
                else
                {
                    a = a + 10;
                }
            };
            if (s[i] == 'L')
            {
                a = a + 50;
            };
            if (s[i] == 'C')
            {
                if (s[i + 1] == 'D' || s[i + 1] == 'M' && i != s.size() - 1)
                {
                    a = a - 100;
                }
                else
                {
                    a = a + 100;
                }
            };
            if (s[i] == 'D')
            {
                a = a + 500;
            };
            if (s[i] == 'M')
            {
                a = a + 1000;
            };
        }
        return a;
    }
};