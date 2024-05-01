#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
   int nearestPerfectSquare = std::ceil(std::sqrt(n));
   int operations = 0;

   if (nearestPerfectSquare * nearestPerfectSquare == n)
   {
      return operations;
   }

   int diff1 = std::abs(nearestPerfectSquare * nearestPerfectSquare - n);
   int diff2 = std::abs((nearestPerfectSquare - 1) * (nearestPerfectSquare - 1) - n);

   operations = (diff1 < diff2) ? diff1 : diff2;

   return operations;
}

int main()
{
   cout << solve(40);
   return 0;
}