#include <stdio.h>
#include <stdlib.h>
 
int* initialize()
{
    
    int *temp = (int*) malloc(sizeof(int) * 3);
 
    *temp = 40;
    *(temp + 1) = 50;
    *(temp + 2) = 10;
 
    return temp;
}
 
int main()
{
    int a, b, c;
 
    int *arr = initialize();
 
    a = arr[0];
    b = arr[1];
    c = arr[2];
 
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
 
    return 0;
}