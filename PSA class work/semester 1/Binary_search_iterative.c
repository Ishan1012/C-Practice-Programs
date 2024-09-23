#include <stdio.h>

int BinarySearch(int[], int, int);

int main(int argc, char const *argv[])
{
    int key, index;
    int arr[] = {1, 12, 18, 22, 45, 56, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the key: ");
    scanf("%d", &key);

    index = BinarySearch(arr, n, key);

    if (index > 0)
        printf("Found at index %d", index);
    else
        printf("Key does not exist");

    return 0;
}

int BinarySearch(int arr[], int n, int key)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}