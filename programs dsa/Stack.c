#include<stdio.h>
#include<conio.h>

int push(int stack[],int *top,int val,int size);
int pop(int stack[],int *top);

void display(int stack[],int top);
void main()
{
    int stack[20];
    int top=-1;

    int val,size,choice,result;
    printf("\n Enter the size of the stack");
    scanf("%d",&size);
    size--;

    do
    {
        printf("\n Menu- Stack Operations");
        printf("\n Push 1");
        printf("\n Pop 2");
        printf("\n Display Stcak 3");
        printf("\n Quit 4");

        switch (choice)
        {
        case 1:
        printf("\n Enter the value to be pushed ");
        scanf("%d",&val);
        result=push(stack,&top,val,size);
        if (result==0)
        printf("\n The stack is full ");
            break;
        
        case 2:
        result=pop(stack,&top);
        if(result==9999)
        printf("\n The stack is empty ");
        else
        printf("\n The popped value is =%d",result);
        break;

        case 3:
        display(stack,top);
            break;
        }
        printf("\n\n Press any key to continue ");
        getch();

    } while (choice!=4);
    
}

int push(int stack[],int *top,int val,int size)
{
    if(*top>=size)
    return 0;
    else{
        *top=*top +1;
        stack[*top]=val;
        return 1;
    }
}

int pop(int stack[],int *top)
{
    int val;
    if(*top<0)
    return 9999;
    else{
        val=stack[*top];
        *top=*top-1;
        return val;
    }
}

void display(int stack[],int top)
{
    int i;
    printf("\n The contents of stack are: ");
    for(i=top;i>=0;i--)
    printf("%d",stack[i]);
}