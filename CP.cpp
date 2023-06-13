#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
int t, n, m, lake_size, ans;
int a[MAXN][MAXN], vis[MAXN][MAXN], dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

void dfs(int x, int y)
{
    vis[x][y] = 1;
    lake_size += a[x][y];
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && a[nx][ny] && !vis[nx][ny])
            dfs(nx, ny);
    }
}

long long rec(int row, int low, int high) {
    long long sum = 0;
    while (row--)
    {
        for (int i = low; i <= high; i++)
        {
            sum += (row * (row - 1) / 2 + i) * (row * (row - 1) / 2 + i);
        }
        if (low - 1 >= 0)
            low--;
        if (high > row)
            high = row;
    }
    return sum;
}

int main()
{
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int row = (-1 + sqrt(1 + 8*m))/2;
        int index = n - (row*(row-1)/2) - 1;
        int low = index, high = index;

    }
    return 0;
}
