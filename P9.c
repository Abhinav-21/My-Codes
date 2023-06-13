#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Bubble_Sort(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Insertion_Sort(int arr[], int size)
{

    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void Selection_Sort(int arr[], int size)
{
    int i, j, small;
    for (i = 0; i < size - 1; i++)
    {
        small = i;
        for (j = i + 1; j < size; j++)
            if (arr[j] < arr[small])
                small = j;
        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int a[] = {5000, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000};
    for (int k = 0; k < 11; k++)
    {
        int arr[a[k]];
        for (int i = 0; i < a[k]; i++)
        {
            arr[i] = rand();
        }
        clock_t start, end;
        start = clock();
        Bubble_Sort(arr, a[k]);
        end = clock();
        // print(arr,size);
        printf("%d %f\n", a[k], (float)(end - start) / CLOCKS_PER_SEC);
    }
    printf("\n");
    for (int k = 0; k < 11; k++)
    {
        int arr[a[k]];
        for (int i = 0; i < a[k]; i++)
        {
            arr[i] = rand();
        }
        clock_t start, end;
        start = clock();
        Selection_Sort(arr, a[k]);
        end = clock();
        // print(arr,size);
        printf("%d %f\n", a[k], (float)(end - start) / CLOCKS_PER_SEC);
    }
    printf("\n");
    for (int k = 0; k < 11; k++)
    {
        int arr[a[k]];
        for (int i = 0; i < a[k]; i++)
        {
            arr[i] = rand();
        }
        clock_t start, end;
        start = clock();
        Insertion_Sort(arr, a[k]);
        end = clock();
        // print(arr,size);
        printf("%d %f\n", a[k], (float)(end - start) / CLOCKS_PER_SEC);
    }
    return 0;
}