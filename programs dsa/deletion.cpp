#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elemnts to be in array\n";
    cin >> n;
    int arr[10];
    cout << "Enter the elemnts of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number and its index number to be deleted\n";
    int k, p;
    cin >> k >> p;
    for (int i = p; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}