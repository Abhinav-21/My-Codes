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

int main(int argc, char const *argv[])
{
    fio;
    char arr[8][8];
    int ans[8][8];
    memset(ans, 0, sizeof(ans[0][0]) * 64);
    pair<int, int> king;

    multimap<char, pair<int, int>> pos;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)

        {
            cin >> arr[i][j];
            if (arr[i][j] != '.')
            {
                pos.insert(make_pair(arr[i][j], make_pair(i, j)));
            }
        }
    }
    for (auto it : pos)
    {
        // Case of Queen
        if (it.first == 'Q')
        {
            int temp = ans[it.second.first][it.second.second];
            diloop(it.second.first - 1, -1)
            {
                if (arr[i][it.second.second] != '.' and arr[i][it.second.second] != 'k')
                {
                    ans[i][it.second.second] = 1;
                    break;
                }
                ans[i][it.second.second] = 1;
            }
            iloop(it.second.first + 1, 8)
            {
                if (arr[i][it.second.second] != '.' and arr[i][it.second.second] != 'k')
                {
                    ans[i][it.second.second] = 1;
                    break;
                }
                ans[i][it.second.second] = 1;
            }
            diloop(it.second.second - 1, -1)
            {
                if (arr[it.second.first][i] != '.' and arr[it.second.first][i] != 'k')
                {
                    ans[it.second.first][i] = 1;
                    break;
                }
                ans[it.second.first][i] = 1;
            }
            iloop(it.second.second + 1, 8)
            {
                if (arr[it.second.first][i] != '.' and arr[it.second.first][i] != 'k')
                {
                    ans[it.second.first][i] = 1;
                    break;
                }
                ans[it.second.first][i] = 1;
            }
            for (int i = it.second.first, j = it.second.second; i++, j++;)
            {
                if (arr[i][j] != '.' and arr[i][j] != 'k' or i == 8 or j == 8)
                {
                    ans[i][j] = 1;
                    break;
                }
                ans[i][j] = 1;
            }
            for (int i = it.second.first, j = it.second.second; i++, j--;)
            {
                if (arr[i][j] != '.' and arr[i][j] != 'k' or i == 8 or j == -1)
                {
                    ans[i][j] = 1;
                    break;
                }
                ans[i][j] = 1;
            }
            for (int i = it.second.first, j = it.second.second; i--, j++;)
            {
                if (arr[i][j] != '.' and arr[i][j] != 'k' or i == -1 or j == 8)
                {
                    ans[i][j] = 1;
                    break;
                }
                ans[i][j] = 1;
            }
            for (int i = it.second.first, j = it.second.second; i--, j--;)
            {
                if (arr[i][j] != '.' and arr[i][j] != 'k' or i == -1 or j == -1)
                {
                    ans[i][j] = 1;
                    break;
                }
                ans[i][j] = 1;
            }
            ans[it.second.first][it.second.second] = temp;
        }
        // Case of Bishop
        if (it.first == 'B')
        {
            int temp = ans[it.second.first][it.second.second];
            for (int i = it.second.first, j = it.second.second; i++, j++;)
            {
                if (arr[i][j] != '.' and arr[i][j] != 'k' or i == 8 or j == 8)
                {
                    ans[i][j] = 1;
                    break;
                }
                ans[i][j] = 1;
            }
            for (int i = it.second.first, j = it.second.second; i++, j--;)
            {
                if (arr[i][j] != '.' and arr[i][j] != 'k' or i == 8 or j == -1)
                {
                    ans[i][j] = 1;
                    break;
                }
                ans[i][j] = 1;
            }
            for (int i = it.second.first, j = it.second.second; i--, j++;)
            {
                if (arr[i][j] != '.' and arr[i][j] != 'k' or i == -1 or j == 8)
                {
                    ans[i][j] = 1;
                    break;
                }
                ans[i][j] = 1;
            }
            for (int i = it.second.first, j = it.second.second; i--, j--;)
            {
                if (arr[i][j] != '.' and arr[i][j] != 'k' or i == -1 or j == -1)
                {
                    ans[i][j] = 1;
                    break;
                }
                ans[i][j] = 1;
            }
            ans[it.second.first][it.second.second] = temp;
        }
        // Case of Rook
        if (it.first == 'R')
        {
            int temp = ans[it.second.first][it.second.second];
            diloop(it.second.first - 1, -1)
            {
                cout << '+' << endl;
                if (arr[i][it.second.second] != '.' and arr[i][it.second.second] != 'k')
                {
                    cout << arr[it.second.first][i] << " " << i << it.second.second << " " << endl;
                    ans[i][it.second.second] = 1;
                    break;
                }
                ans[i][it.second.second] = 1;
            }
            iloop(it.second.first + 1, 8)
            {
                cout << '<' << endl;
                if (arr[i][it.second.second] != '.' and arr[i][it.second.second] != 'k')
                {
                    cout << arr[it.second.first][i] << " " << i << it.second.second << " " << endl;
                    ans[i][it.second.second] = 1;
                    break;
                }
                ans[i][it.second.second] = 1;
            }
            diloop(it.second.second - 1, -1)
            {
                cout << ']' << endl;
                if (arr[it.second.first][i] != '.' and arr[it.second.first][i] != 'k')
                {
                    cout << arr[it.second.first][i] << " " << it.second.first << i << " " << endl;
                    ans[it.second.first][i] = 1;
                    break;
                }
                ans[it.second.first][i] = 1;
            }
            iloop(it.second.second + 1, 8)
            {
                cout << '*' << endl;
                if (arr[it.second.first][i] != '.' and arr[it.second.first][i] != 'k')
                {
                    cout << arr[it.second.first][i] << " " << it.second.first << i << " " << endl;
                    ans[it.second.first][i] = 1;
                    break;
                }
                ans[it.second.first][i] = 1;
            }
            ans[it.second.first][it.second.second] = temp;
        }
        // Case of Knight
        if (it.first == 'N')
        {
            if ((it.second.first + 1 >= 0 and it.second.first + 1 < 8) and
                (it.second.second - 2 >= 0 and it.second.second - 2 < 8))
            {
                ans[it.second.first + 1][it.second.second - 2] = 1;
            }
            if ((it.second.first + 1 >= 0 and it.second.first + 1 < 8) and
                (it.second.second + 2 >= 0 and it.second.second + 2 < 8))
            {
                ans[it.second.first + 1][it.second.second + 2] = 1;
            }
            if ((it.second.first - 1 >= 0 and it.second.first - 1 < 8) and
                (it.second.second - 2 >= 0 and it.second.second - 2 < 8))
            {
                ans[it.second.first - 1][it.second.second - 2] = 1;
            }
            if ((it.second.first - 1 >= 0 and it.second.first - 1 < 8) and
                (it.second.second + 2 >= 0 and it.second.second + 2 < 8))
            {
                ans[it.second.first - 1][it.second.second + 2] = 1;
            }
            if ((it.second.first + 2 >= 0 and it.second.first + 2 < 8) and
                (it.second.second - 1 >= 0 and it.second.second - 1 < 8))
            {
                ans[it.second.first + 2][it.second.second - 1] = 1;
            }
            if ((it.second.first + 2 >= 0 and it.second.first + 2 < 8) and
                (it.second.second + 1 >= 0 and it.second.second + 1 < 8))
            {
                ans[it.second.first + 2][it.second.second + 1] = 1;
            }
            if ((it.second.first - 2 >= 0 and it.second.first - 2 < 8) and
                (it.second.second + 1 >= 0 and it.second.second + 1 < 8))
            {
                ans[it.second.first - 2][it.second.second + 1] = 1;
            }
            if ((it.second.first - 2 >= 0 and it.second.first - 2 < 8) and
                (it.second.second - 1 >= 0 and it.second.second - 1 < 8))
            {
                ans[it.second.first - 2][it.second.second - 1] = 1;
            }
        }
        // Case of King
        if (it.first == 'K')
        {
            int temp = ans[it.second.first][it.second.second];
            if ((it.second.first + 1 >= 0 and it.second.first + 1 < 8) and
                (it.second.second + 1 >= 0 and it.second.second + 1 < 8))
            {
                ans[it.second.first + 1][it.second.second + 1] = 1;
            }
            if ((it.second.first + 1 >= 0 and it.second.first + 1 < 8) and
                (it.second.second - 1 >= 0 and it.second.second - 1 < 8))
            {
                ans[it.second.first + 1][it.second.second - 1] = 1;
            }
            if ((it.second.first - 1 >= 0 and it.second.first - 1 < 8) and
                (it.second.second - 1 >= 0 and it.second.second - 1 < 8))
            {
                ans[it.second.first - 1][it.second.second - 1] = 1;
            }
            if ((it.second.first - 1 >= 0 and it.second.first - 1 < 8) and
                (it.second.second + 1 >= 0 and it.second.second + 1 < 8))
            {
                ans[it.second.first - 1][it.second.second + 1] = 1;
            }
            if ((it.second.first >= 0 and it.second.first < 8) and
                (it.second.second + 1 >= 0 and it.second.second + 1 < 8))
            {
                ans[it.second.first][it.second.second + 1] = 1;
            }
            if ((it.second.first >= 0 and it.second.first < 8) and
                (it.second.second - 1 >= 0 and it.second.second - 1 < 8))
            {
                ans[it.second.first][it.second.second - 1] = 1;
            }
            if ((it.second.first - 1 >= 0 and it.second.first - 1 < 8) and
                (it.second.second >= 0 and it.second.second < 8))
            {
                ans[it.second.first - 1][it.second.second] = 1;
            }
            if ((it.second.first + 1 >= 0 and it.second.first + 1 < 8) and
                (it.second.second >= 0 and it.second.second < 8))
            {
                ans[it.second.first + 1][it.second.second] = 1;
            }
            ans[it.second.first][it.second.second] = temp;
        }
        if (it.first == 'k')
        {
            king = make_pair(it.second.first, it.second.second);
        }
    }
    if (ans[king.first][king.second] == 0)
    {
        cout << "SAFE" << endl;
    }
    else
    {
        if (king.first + 1 < 8 and king.second + 1 < 8 and ans[king.first + 1][king.second + 1] == 0)
        {
            cout << "CHECK" << endl;
        }
        else if (king.first + 1 < 8 and king.second - 1 >= 0 and ans[king.first + 1][king.second - 1] == 0)
        {
            cout << "CHECK" << endl;
        }
        else if (king.first + 1 < 8 and king.second < 8 and ans[king.first + 1][king.second] == 0)
        {
            cout << "CHECK" << endl;
        }
        else if (king.first - 1 < 8 and king.second + 1 < 8 and ans[king.first - 1][king.second + 1] == 0)
        {
            cout << "CHECK" << endl;
        }
        else if (king.first - 1 < 8 and king.second - 1 < 8 and ans[king.first - 1][king.second - 1] == 0)
        {
            cout << "CHECK" << endl;
        }
        else if (king.first - 1 < 8 and king.second < 8 and ans[king.first - 1][king.second] == 0)
        {
            cout << "CHECK" << endl;
        }
        else if (king.first < 8 and king.second + 1 < 8 and ans[king.first][king.second + 1] == 0)
        {
            cout << "CHECK" << endl;
        }
        else if (king.first < 8 and king.second - 1 < 8 and ans[king.first][king.second - 1] == 0)
        {
            cout << "CHECK" << endl;
        }
        else
        {
            cout << "CHECKMATE" << endl;
        }
    }
    iloop(0, 8)
    {
        jloop(0, 8)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
