#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    static int x = 1;
    int index = (start + end) / 2;

    if (arr[index] == key)
        return index;

    else if (key > arr[index] && start < end)
        binarySearch(arr, index + 1, end, key);

    else if (key < arr[index] && start < end)
        binarySearch(arr, start, index - 1, key);

    else
        return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int array[] = {3, 5};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "output: " << binarySearch(array, 0, size, 3) << endl;

    return 0;
}