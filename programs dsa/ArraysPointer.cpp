// #include<stdio.h>
// int main()
// {
//     int arr[]={1,2,3};
//     int *ptr=arr;
//     printf("%d = %d",arr[0],arr);
//     printf("\n%d = %d",arr[1],arr+1);
//     printf("\n%d = %d",arr[2],arr+2);

//     printf("\n%d",&ptr);
//     printf("\n%d",ptr);
//     printf("\n%d",*ptr);

//     printf("\n%d",&ptr+1);
//     printf("\n%d",ptr+1);
//     printf("\n%d",*ptr+1);

//      printf("\n%d",&ptr+2);
//     printf("\n%d",ptr+2);
//     printf("\n%d",*ptr+2);

    
// }

#include<stdio.h>

int main(){
    int a = 34;
    int * ptra = &a;

    char c = 'A';
    char * ptrc = &c;

// //For integer datatype
    printf("Value of A is %d\n", a);
    printf("Address of A is %d\n", &a);
    printf("Address of A is %u\n", &a);
    printf("Address of A is %u\n", ptra);
    printf("Address of A is %p\n", &a);
    printf("Value of A is %u\n", *ptra);

    printf("Address of c is %d\n", ptra);
    printf("Incremented Address of c is %d\n", ptra + 1);

//For char datatype
    printf("Value of c is %c\n", c);
    printf("Address of c is %d\n", &c);
    printf("Address of c is %u\n", &c);
    printf("Address of c is %p\n", &c);
    printf("Address of c is %d\n", ptrc);
    printf("Incremented Address of c is %d\n", ptrc +1);

}