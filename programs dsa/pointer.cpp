#include<bits/stdc++.h>
using namespace std;
 void sum(int *,int *,int *);
 int main()
 {
     int num1,num2,total;
     cout<<"Enter two numbers\n";
     cin>>num1>>num2;
     sum(&num1,&num2,&total);
     cout<<total<<endl;
 }
 void sum(int *a,int *b,int *t)
 {
     *t=*a+ *b;
 }