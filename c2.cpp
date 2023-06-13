#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    float fraction_juice = 0;
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> fraction_juice;
        total += fraction_juice / 100;
    }

    cout << 100 * (total / n);

    return 0;
}
