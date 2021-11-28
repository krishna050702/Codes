// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int large = INT_MIN, secondLar = INT_MIN;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] > large)
//             {
//                 large = arr[i];
//             }

//             // if (arr[i] < large)
//             // {
//             //     if (arr[i] > secondLar)
//             //     {
//             //         secondLar = arr[i];
//             //     }
//             // }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] < large)
//             {
//                 if (arr[i] > secondLar)
//                 {
//                     secondLar = arr[i];
//                 }
//             }
//         }
//         cout << secondLar << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int first, second, third;
        cin >> first >> second >> third;
        if (first > second && first > third)
        {
            if (second > third)
            {
                cout << second << endl;
            }
            else
                cout << third << endl;
        }
        else if (second > first && second > third)
        {
            if (first > third)
            {
                cout << first << endl;
            }
            else
                cout << third << endl;
        }
        else if (third > first && third > second)
        {
            if (first>second)
            {
                cout << first << endl;
            }
            else
                cout << second << endl;
        }
    }
    return 0;
}