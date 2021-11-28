// call by value
// #include <stdio.h>  
// void swap(int , int);    
// int main()  
// {  
//     int a = 10;  
//     int b = 20;   
//     printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main  
//     swap(a,b);  
//     printf("After swapping values in main a = %d, b = %d\n",a,b); // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20  
// }  
// void swap (int a, int b)  
// {  
//     int temp;   
//     temp = a;  
//     a=b;  
//     b=temp;  
//     printf("After swapping values in function a = %d, b = %d\n",a,b); // Formal parameters, a = 20, b = 10   
// }  


//call by reference
#include <stdio.h>  
void callByReference(int *, int *);  
void callByValue(int , int);  
int main()  
{  
    int a = 10;  
    int b = 20;  
    printf("\nBy call by refernce \n"); 
    printf("\nBefore swapping the values in main a = %d, b = %d\n",a,b); 
    callByReference(&a,&b);  
    printf("\nAfter swapping values from function but printing from main a = %d, b = %d\n",a,b); 

    printf("\n-------------------------------------------------------------------\n");
    printf("\nBy call by value \n");
    int x=10,y=20;
    printf("\nBefore swapping the values in main x = %d, y = %d\n",x,y);
    callByValue(x,y);  
    printf("\nAfter swapping values from function but printing from main x = %d, y = %d\n\n",x,y);
}  
void callByReference (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
     printf("\nAfter swapping values in function a = %d, b = %d\n",*a,*b); 
} 

void callByValue (int x, int y)  
{  
    int temp;   
    temp = x;  
    x=y;  
    y=temp;  
    printf("After swapping values in function x = %d, y = %d\n",x,y);   
} 