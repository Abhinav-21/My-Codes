#include <bits/stdc++.h>
using namespace std;

int num(int a)
{
    for (int i = 1; i < a; i++)
    {
        if (a % i != 0)
            return i;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        int x = i;
        int count = 1;
        while (x)
        {
            // cout << sum << endl;
            x = num(x);
            count++;
        }
        sum += count;
    }

    cout << sum - (b - a + 1) << endl;

    return 0;
}