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
    fio;
    int n, k;
    input2(n, k);
    string str;
    input(str);
    map<char, int> freq;
    vector<int> arr;
    iloop(0, n)
        freq[str[i]]++;
    for (auto it : freq)
        arr.pb(it.second);

    sort(arr.begin(), arr.end(), greater<int>());

    ll sum = 0;
    int i = 0;
    while (k > 0)
    {
        sum += pow(min(arr[i], k), 2);
        k -= min(arr[i], k);
        i++;
    }
    print(sum);
    return 0;
}
