#include<iostream>
#include<string>
using namespace std;
// int main()
// {
//     char str[80];
//     cout<<"Enter a string\n";
//     cin.getline(str,80);
//     int i;
//     for ( i = 0; str[i]!='\0'; i++);
    
//         cout<<"Length of string is: "<<i;
    
//         return 0;    
// }

int main()
{
    string txt;
    getline(cin,txt);
    cout<<"The length of string is: "<<txt.length()<<endl;
}