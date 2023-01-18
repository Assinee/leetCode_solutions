#include <bits/stdc++.h>
using namespace std;
// int process(int n)
// {
//     int rest = n;
//     int a = 0;
//     while (rest != 0)
//     {
//         a += (rest % 10) * (rest % 10);
//         rest = rest / 10;
//     }
//     cout << a;
//     cout << "hello";
//     return a;
// }
// bool repeated(int n, vector<int> a)
// {
//     for (int i = 0; i < a.size(); ++i)
//     {
//         if (a[i] == n)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// bool isHappy(int n)
// {
//     int i = process(n);
//     vector<int> a;
//     do
//     {
//         a.push_back(i);
//         i = process(i);
//     } while (!repeated(i, a) && i != 1);

//     return (i == 1);
// }
int solve(int n)
{
    int sum = 0;
    while (n)
    {
        int r = n % 10;
        sum += pow(r, 2);
        n /= 10;
    }
    return sum;
}
bool isHappy(int n)
{
    if (n == 1)
        return true;
    unordered_map<int, int> mp; //--> [1,1,1,1,1,1,..]  repated number checker 
    mp[n]++;
    while (1)
    {
        n = solve(n);
        if (n == 1)
            return true;
        mp[n]++;
        if (mp[n] == 2)
            return false;
    }
    return true;
}
int main()
{
}