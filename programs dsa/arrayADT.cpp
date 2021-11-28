#include<bits/stdc++.h>
using namespace std;
struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray * a,int tSize,int uSize)
{
    (*a).total_size=tSize;
     a->total_size=uSize;
    int *ptr=(int *)malloc(tSize*sizeof(int));
}

void show (struct myArray a){
    for (int i = 0; i < a->used_size; i++)
    {
        cout<<a->ptr[i]<<endl;
    }
    
}
int n;
void setVal (struct myArray a){
    for (int i = 0; i < a->used_size; i++)
    {
        cin>>n;
        a->ptr[i]=n;
    }
    
}
int main()
{
    struct myArray marks;
    createArray(&marks,10,2);
    setVal(&marks);
    show(&marks);
}