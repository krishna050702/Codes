#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter first string\n";
    getline(cin,s1);
    cout<<"Enter second string\n";
    getline(cin,s2);
    int result=s1.compare(s2);
    if (result!=-1)
    {
        cout<<"Both entered strings are same\n";
    }
    else
      cout<<"Entered strings are different\n";
    
}