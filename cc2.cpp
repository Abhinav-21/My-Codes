#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        map<long long, int> frequency;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            frequency[x]++;
        }
        long long max = 0;
        for (auto it : frequency)
        {
            if (max < it.second)
                max = it.second;
        }
        // for (auto it : frequency)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        // cout << "max: " << max << endl;
        cout << max - 1 << endl;
    }

    return 0;
}