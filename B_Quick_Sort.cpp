#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define print(x) cout << x << endl;
#define print2(x, y) cout << x << ' ' << y << endl;
#define print3(x, y, z) cout << x << ' ' << y << ' ' << z << endl;
#define input(x) cin >> x;
#define input2(x, y) cin >> x >> y;
#define input3(x, y, z) cin >> x >> y >> z;
#define iloop(a, b) for (int i = a; i < b; i++)
#define jloop(a, b) for (int j = a; j < b; j++)
#define kloop(a, b) for (int k = a; k < b; k++)
#define diloop(a, b) for (int i = a; i > b; i--)
#define djloop(a, b) for (int j = a; j > b; j--)
#define dkloop(a, b) for (int k = a; k > b; k--)
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define mod 1000000007
#define pi 3.1415926535

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

vector<int> printDivisors(int n, vector<int> v)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                v.pb(i);

            else
            {
                v.pb(i);
                v.pb(n / i);
            }
        }
    }
    return v;
}

int main(int argc, char const *argv[])
{
    fio;
    int t;
    input(t);
    while (t--)
    {
        vi v;
        int n, b = 0, c = 0;
        input(n);
        int a = 1;
        v = printDivisors(n, v);

        iloop(0, v.size())
        {
            jloop(i + 1, v.size())
            {
                if (v[i] != 1 and v[j] != 1 and v[i] != v[j] and n % (v[i] * v[j]) == 0)
                {
                    b = v[i];
                    c = v[j];
                    goto end;
                }
            }
        }
    end:
        if (a == b or b == c or a == c)
        {
            print(-1);
        }
        else
            print3(a, b, c);
    }
    return 0;
}
