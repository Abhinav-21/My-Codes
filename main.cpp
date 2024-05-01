#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n), arr1(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    arr1 = arr;
    sort(arr.begin(), arr.end());
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != arr1[i])
            ans++;
    }
    cout << ans / 2 << endl;
    return 0;
}