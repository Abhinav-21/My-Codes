#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define print(x) cout << x << "\n";
#define print2(x, y) cout << x << ' ' << y << "\n";
#define print3(x, y, z) cout << x << ' ' << y << ' ' << z << "\n";
#define input(x) cin >> x;
#define input2(x, y) cin >> x >> y;
#define input3(x, y, z) cin >> x >> y >> z;
#define iloop(a, b) for (int i = a; i < b; i++)
#define jloop(a, b) for (int j = a; j < b; j++)
#define kloop(a, b) for (int k = a; k < b; k++)
#define zloop(a, b, p) for (int z = a; z < b; z += p)
#define diloop(a, b) for (int i = a; i >= b; i--)
#define djloop(a, b) for (int j = a; j >= b; j--)
#define dkloop(a, b) for (int k = a; k >= b; k--)
#define dzloop(a, b, p) for (int z = a; z >= b; z -= p)
#define PB push_back
#define PPB pop_back
#define MP make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef set<char> sc;
typedef unordered_set<char> usc;
typedef set<string> sst;
typedef unordered_set<string> usst;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef pair<int, int> pii;

int main(int argc, char const *argv[])
{
    fio;
    string str;
    input(str);
    map<char, int> mp;
    iloop(0, str.length())
    {
        mp[str[i]]++;
    }
    int odd = 0;
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            odd++;
        }
    }
    if (odd > 1)
    {
        print("NO SOLUTION");
    }
    else
    {
        stack<char> st1, st2;

        for (auto it : mp)
        {
            if (it.second % 2 == 0)
            {
                int x = it.second / 2;
                while (x--)
                {
                    st1.push(it.first);
                }
            }
            else
            {
                int x = it.second / 2;
                while (x--)
                {
                    st2.push(it.first);
                }
            }
        }
        while (!st1.empty())
        {
            cout << st1.top();
            st1.pop();
        }
        if (odd == 1)
        {
            cout << st2.top();
            st2.pop();
        }
        while (!st2.empty())
        {
            cout << st2.top();
            st2.pop();
        }
    }
    
    return 0;
}
