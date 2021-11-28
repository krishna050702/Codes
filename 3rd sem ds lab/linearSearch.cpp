// #include <iostream>
// using namespace std;
// int linaerSearch(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int search;
//     cout << "Enter element to search in array\n";
//     cin >> search;
//     int searchIndex = linaerSearch(arr, n, search);
//     cout << "Element was found at index by linear search " << searchIndex << endl;
// }



// #include<stdio.h>
// int linear_search(int*, int, int);
 
// int main()
// {
//    int array[100], search, i, n, position;
 
//    printf("Enter the number of elements in array\n");
//    scanf("%d",&n);
 
//    printf("Enter %d numbers\n", n);
 
//    for ( i = 0 ; i < n ; i++ )
//       scanf("%d",&array[i]);
 
//    printf("Enter the number to search\n");
//    scanf("%d",&search);
 
//    position = linear_search(array, n, search);
 
//    if ( position == -1 )
//       printf("%d is not present in array.\n", search);
//    else
//       printf("%d is present at location %d.\n", search, position+1);
 
//    return 0;
// } 
 
// int linear_search(int *pointer, int n, int find)
// {
//    int i;
 
//    for ( i = 0 ; i < n ; i++ )
//    {
//       if ( *(pointer+i) == find )
//          return i;
//    }
 
//    return -1;
// }




//Binary Search 


#include<stdio.h>
#include<stdlib.h>
int c=0;
int binarysearch(int *,int,int);
int binarysearch(int *a,int m,int n)
{
 
    int low,upp,mid;
low=0,upp=n-1;
    while(low<=upp)
        {
         mid=(low+upp)/2;
         if(m==a[mid])
            {
             c=1;
             break;
         }
         else if(m<a[mid])
            {
             upp=mid-1;
         }
         else
             low=mid+1;
    }
    return mid;
}
int main()
{
 
    int *a,i,n,m,pos;
 
    printf("Enter the size of an array: ");
    scanf("%d",&n);
        a=(int*)malloc(n*sizeof(int));
 
    printf("Enter the elements in ascending order: ");
    for(i=0;i<n;i++)
        {
         scanf("%d",(a+i));
    }
 
    printf("Enter the number to be search: ");
    scanf("%d",&m);
        pos=binarysearch(a,m,n);
 
     
    if(c==0)
         printf("The number is not found.\n");
    else
         printf("The number is found at position %d\n",pos+1);
 
    return 0;
}