#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<long double, long double> home;
    pair<long double, long double> univ;
    cin >> home.first >> home.second;
    cin >> univ.first >> univ.second;
    long double A, B, C;
    if (home.first - univ.first != 0)
    {
        long double slope = (home.second - univ.second) / (home.first - univ.first);
        A = slope;
        B = -1;
        C = home.second - (slope * home.first);
    }
    else
    {
        A = 1;
        B = 0;
        C = -home.first;
    }

    int n;
    cin >> n;
    long double coordinates[n][2];
    long double a, b, c;
    long double x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;

        if ((A * b - a * B) != 0)
        {
            x = (B * c - b * C) / (A * b - a * B);
            y = (C * a - c * A) / (A * b - a * B);
            coordinates[i][0] = x;
            coordinates[i][1] = y;
        }
    }

    int count = 0;
    for (auto v : coordinates)
    {
        if (v[0] <= max(home.first, univ.first) && v[0] >= min(home.first, univ.first) && v[1] <= max(home.second, univ.second) && v[1] >= min(home.second, univ.second))

            count++;
    }
    cout << count << endl;

    return 0;
}