0; i < n; i++)
        {
            if (arrA[i] > arrA[n - 1] and arrA[i] > arrB[n - 1] or arrB[i] > arrB[n - 1] and arrB[i] > arrA[n - 1])
            {
                a = 0;
                cout << "No" << endl;
                break;
            }
        }