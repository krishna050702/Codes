// #include <stdio.h>
// void initialize(int *a, int *b, char *c)
// {
//     *a = 5;
//     *b = 20;
//     *c = 'K';
// }

// int main()
// {
//     int a, b;
//     char c;

//     initialize(&a, &b, &c);
//     printf("a = %d\nb = %d\nc = %c\n", a, b, c);
//     return 0;
// }




// #include <stdio.h>
// struct Data {
//     int a, b;
//     char c;
// };
 
// struct Data initialize()
// {
//     struct Data info = { 40, 90, 'K' };
 
//     return info;
// }
 
// int main(void)
// {
//     int a, b;
//     char c;
 
//     struct Data info = initialize();
 
//     a = info.a;
//     b = info.b;
//     c = info.c;
 
//     printf("a = %d\nb = %d\nc = %c\n", a, b, c);
 
//     return 0;
// }


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