#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        long long int arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        long long int ans = 0;
        if (n == m)
        {
            sort(arr2, arr2 + m);
            for (int i = 0; i < m; i++)
            {
                ans = ans + arr2[i];
            }
            cout << ans << endl;
        }
        else if (n > m)
        {
            sort(arr1, arr1 + n);
            for (int i = 0; i < m; i++)
            {
                arr1[i] = arr2[i];
            }
            for (int i = 0; i < n; i++)
            {
                ans = ans + arr1[i];
            }
            cout << ans << endl;
        }
        else
        {
            sort(arr2, arr2 + m);
            for (int i = m - 1; i > n - m + 1; i--)
            {
                ans = ans + arr2[i];
            }
            cout << ans << endl;
        }
    }
}