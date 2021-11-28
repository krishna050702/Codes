#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        cout << "Array[" << i << "] = " << arr[i] << endl;
    }

    cout << "\n-------------------------------------------------\n";
    // cout << "\n\n Sorting the array\n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[j] < arr[i])
    //         {
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n\n Sorting array in order\n";
    // sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << "\n-------------------------------------------------\n";

    // cout << "\n\n Sorting of array in decending array\n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // sort(arr, arr + n, greater<int>());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }


    // cout << "\n-------------------------------------------------\n";
    // cout<<"\n\nInsertion of an array\n";
    // int k,p;
    // cout<<"Enter number and position\n";
    // cin>>k>>p;
    // for (int i = n; i >k-1; i++)
    // {
    //     arr[i+1]=arr[i];
    // }
    // arr[p]=k;
       // n=n+1;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    
    // cout << "\n-------------------------------------------------\n";
    // cout<<"\n\nDeletion of an array\n";
    // int k,p;
    // cout<<"Enter number and position\n";
    // cin>>k>>p;
    // for (int i =p; i < n; i++)
    // {
    //     arr[i]=arr[i+1];
    // }
    // n=n-1;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }


    // cout << "\n-------------------------------------------------\n";
    // cout<<"\n\nSearch of an array\n";
    // int k;
    // bool flag=false;
    // cout<<"Enter number\n";
    // cin>>k;
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]==k)
    //     {
    //         cout<<"Index poistion of element is "<<i<<endl;
    //         flag =true;
    //         return 0;
    //     }
    // }
    // if(flag==false) 
    // cout<<"Element is not found\n";
    
    
    return 0;
}