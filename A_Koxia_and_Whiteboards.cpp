#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Inf32 1000000001
#define Inf64 4000000000000000001

int main()
{

    int _t;
    cin >> _t;

    rep(_, _t)
    {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n + m);
        rep(i, n + m) scanf("%lld", &a[i]);

        sort(a.begin(), a.end() - 1);
        reverse(a.begin(), a.end());

        long long ans = 0;
        rep(i, n) ans += a[i];

        cout << ans << endl;
    }

    return 0;
}