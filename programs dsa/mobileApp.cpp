// #include <bits/stdc++.h>
// using namespace std;

// const int MAX_SIZE = 500000;
// typedef long long ll;
// ll data[MAX_SIZE];

// int main()
// {
//     int n;
//     ll maxProfit = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld", data + i);
//     }
//     sort(data, data + n);

//     for (int i = 0; i < n; i++)
//     {
//         maxProfit = max(maxProfit, (n - i) * data[i]);
//     }

//     cout << maxProfit << endl;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    long long int min = 0;
    for (int i = 0; i < n; i++)
    {
        long long int temp = arr[i] * (n - i);
        if (min < temp)
        {
            min = temp;
        }
    }
    cout <<min;
}