#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> c(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c[i][j];
        }
    }
    vector<vector<int>> distance(n, vector<int>(m, INT_MAX));
    queue<pair<int, int>> q;
    if (c[0][0] == -1)
    {
        distance[0][0] = 0;
        q.push({0, 0});
    }
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x > 0 && c[x - 1][y] != -1 && distance[x - 1][y] == INT_MAX)
        {
            distance[x - 1][y] = distance[x][y] + 1;
            q.push({x - 1, y});
        }
        if (x < n - 1 && c[x + 1][y] != -1 && distance[x + 1][y] == INT_MAX)
        {
            distance[x + 1][y] = distance[x][y] + 1;
            q.push({x + 1, y});
        }
        if (y > 0 && c[x][y - 1] != -1 && distance[x][y - 1] == INT_MAX)
        {
            distance[x][y - 1] = distance[x][y] + 1;
            q.push({x, y - 1});
        }
        if (y < m - 1 && c[x][y + 1] != -1 && distance[x][y + 1] == INT_MAX)
        {
            distance[x][y + 1] = distance[x][y] + 1;
            q.push({x, y + 1});
        }
    }
    if (distance[n - 1][m - 1] != INT_MAX)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
