#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define print(x) cout << x;
#define print2(x, y) cout << x << ' ' << y;
#define print3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define input(x) cin >> x;
#define input2(x, y) cin >> x >> y;
#define input3(x, y, z) cin >> x >> y >> z;
#define iloop(a, b) for (i = a; i < b; i++)
#define dloop(a, b) for (i = a; i > b; i--)
#define pb push_back
#define ppb pop_back
#define MP make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef set<int> si;
typedef set<char> scr;
typedef set<string> sst;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef pair<int, int> pii;

int main(int argc, char const *argv[])
{
    fio int t;
    input(t);
    while (t--)
    {
        int n, m, x;
        input2(n, m);
        vector<int> a, b;

        for (int i = 0; i < n; i++)
        {
            input(x);
            a.push_back(x);
        }

        for (int i = 0; i < m; i++)
        {
            input(x);
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        int i = 0, j = 0;
        do
        {
            a[i] = b[j];
            if (i + 1 != n and j + 1 != m)
            {
                i++;
                j++;
            }

        } while (b[j] > a[i]);
        // for (auto it : a)
        // {
        //     print it << " ";
        // }
        // print endl;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        print(sum);
    }
    return 0;
}
