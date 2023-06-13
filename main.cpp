#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    vector<pair<int, int>> p;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                p.push_back({i, j});
            }
        }
        for (int f = 0; i < p.size(); f++)
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (p[f].first == i || p[f].second == j)
                        a[i][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
