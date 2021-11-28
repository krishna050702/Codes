// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x=10;
//     int *ptr;
//     ptr=&x;
//     cout<<x<<endl;
//     cout<<*ptr<<endl;
//     cout<<ptr<<endl;
//     cout<<(&ptr)<<endl;
//     cout<<"Address of pointer and variable\n";
//     cout<<&(*ptr)<<endl;
//     cout<<(&x)<<endl;
// }

// // #include <stdio.h>

// // int main()
// // {
// //     int x = 6 ;
// //     int *ptr;
// //     ptr= &x;
// //     printf("Merory location of x: %p "  , ptr);

// //     return 0;
// // }

#include<stdio.h>
int main()
{
    int a=40;
    int *ptr=&a;
    char c='A';
    char *cptrc=&c;

    printf("\n value of a is %d",a);
    printf("\n address of a is %p",&a+1);
    printf("\n address of a is %u",&a);
    printf("\n %d",ptr);
    printf("\n %d",*ptr);
    printf("\n %p",&ptr);
    printf("\n %p",&a);

    printf("\n %d",ptr);
    printf("\n %d",ptr+1);

printf("\n----------------\n");
    printf("\n value of c is %c",c);
    printf("\n address of c is %d",&c);
    printf("\n address of c is %u",&c);
    printf("\n %d",cptrc);
    printf("\n %d",cptrc+1);
    printf("\n %p",*cptrc);
    printf("\n %d",&cptrc);
    printf("\n %d",&c);

    printf("\n %c",cptrc);
    printf("\n %c",cptrc+1);

}