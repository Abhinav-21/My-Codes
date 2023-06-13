#include <bits/stdc++.h>
using namespace std;

int main()
{
   string num;
   cin >> num;

   for (long long i = 0; i < num.size() / 2; i++)
   {
      if (num[i] != num[num.size() - i - 1])
      {
         cout << 0;
         return 0;
      }
   }
   cout << 1;

   return 0;
}