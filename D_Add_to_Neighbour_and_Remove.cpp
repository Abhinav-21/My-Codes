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

void ques1(vector<int> v1, vector<int> v2, int maximum, int count);
void ques2(vector<int> v1, vector<int> v2, int maximum, int count);

void isPal(vector<int> v)
{
    iloop(0, v.size())
    {
        if (v[i] != v[v.size() - 1 - i])
        {
            print("galat");
            return;
        }
        print(v.size() / 2);
    }
}

int check(vector<int> v)
{
    int ans = 1;
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    if (v.size() > 1)
    {
        iloop(0, v.size() - 1)
        {
            if (v[i] != v[i + 1])
            {
                ans = 0;
                break;
            }
        }
    }
    // print2("ans ", ans);
    return ans;
}

void ques2(vector<int> v1, vector<int> v2, int maximum, int count)
{
    int leaving = 0;
    diloop(v1.size() - 1, -1)
    {
        if (v1[i] == maximum)
        {
            leaving = 1;
        }
        if (v1[i] < maximum)
        {
            if (i > 0)
            {
                if (leaving == 1 and v1[i - 1] == maximum)
                {
                }
                // print2("less", v1[i]);
                else
                {
                    int sum = v1[i] + v1[i - 1];
                    v1[i - 1] = (sum);
                    count++;
                    if (sum > maximum)
                        maximum = sum;
                }
            }
            else if (i == 0)
            {
                v2.pb(v1[i]);
            }
        }
        else
        {
            v2.pb(v1[i]);
        }
    }
    // for (auto it : v2)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    if (check(v2) == 0)
    {
        vi v3;
        v3 = v2;
        v2.clear();
        // print("here1");
        ques1(v3, v2, maximum, count);
    }
    else
        print(count);
}

void ques1(vector<int> v1, vector<int> v2, int maximum, int count)
{
    if (v2.size() == v1.size())
        print(v1.size() - 1);
    int leaving = 0;
    iloop(0, v1.size())
    {
        if (v1[i] == maximum)
        {
            leaving = 1;
        }
        if (v1[i] < maximum)
        {
            if (i < v1.size() - 1)
            {
                // print2("less", v1[i]);
                if (
                    v1[i + 1] == maximum and leaving == 1)
                {
                }
                else
                {
                    int sum = v1[i] + v1[i + 1];
                    v1[i + 1] = (sum);
                    count++;
                    if (sum > maximum)
                        maximum = sum;
                }
            }
            else if (i == v1.size() - 1)
            {
                v2.pb(v1[i]);
            }
        }
        else
        {
            v2.pb(v1[i]);
        }
    }
    // for (auto it : v2)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    if (check(v2) == 0)
    {
        vi v3;
        v3 = v2;
        v2.clear();
        // print("here2");
        ques2(v3, v2, maximum, count);
    }
    else
        print(count);
}

int main(int argc, char const *argv[])
{
    fio int t;
    input(t);
    while (t--)
    {
        int n, x, maximum = 0;
        vi arr, v2;
        input(n);
        iloop(0, n)
        {
            input(x);
            arr.pb(x);
            if (maximum < x)
                maximum = x;
        }
        static int count = 0;
        ques1(arr, v2, maximum, count);
    }
    return 0;
}
