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

string decimalToBinary(int n)
{
    string s = bitset<64>(n).to_string();

    const auto loc1 = s.find('1');

    if (loc1 != string::npos)
        return s.substr(loc1);

    return "0";
}

int main(int argc, char const *argv[])
{
    fio;
    int t;
    input(t);
    while (t--)
    {
        int n, k, s, div;
        vi arr;
        input3(n, k, s);
        int key = log(s) / log(k);
        iloop(0, n - key - 1)
        {
            arr.pb(0);
        }
        if (s % 2 == 0)
        {
            div = s / k;
        }
        else
        {
            cout << 1 << " ";
            div = (s - 1) / k;
        }
        string str = decimalToBinary(div);

        diloop(str.size(), -1)
        {
            cout << str[i] << " ";
        }
        for (auto it : arr)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
