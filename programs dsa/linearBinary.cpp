#include <iostream>
using namespace std;
int linaerSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int size, int element)
{
    int low, high, mid;
    low=0;
    high=size-1;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int search;
    cout << "Enter element to search in array\n";
    cin >> search;
    int searchIndex = linaerSearch(arr, n, search);
    cout << "Element was found at index by linear search " << searchIndex << endl;

    int sea = binarySearch(arr, n, search);
    cout << "Element was found at index by binary search " << sea << endl;
}