#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int odd=1,even=0,sume=2,sumo=1;
    for (int i = 0; i < n; i++)
    {
         if(even%2==0)
           sume=sume+even;
        if(odd%2!=0)
          sumo=sumo+odd;
        even +=2;
        odd +=2;
    }
    cout<<sumo<<" "<<sume;
}