#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    for (int j = 0; j < s.size() / 2; j++)
    {
        if (s[j] != s[s.size() - j - 1])
        {
            return false;
        }
    }
    return true;
}

bool validPalindrome(string s)
{
    int x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        x = x ^ s[i];
    }
    cout << x << endl;
    return false;
}

int main(int argc, char const *argv[])
{
    validPalindrome("abc");
    return 0;
}
