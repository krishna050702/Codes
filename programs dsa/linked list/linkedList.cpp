#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
    }
    
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    // Allocated memory for nodes in the linked list in Heap
    head =(struct Node*)malloc(sizeof(struct Node));
    second =(struct Node*)malloc(sizeof(struct Node));
    third =(struct Node*)malloc(sizeof(struct Node));

    //link first and second node
    head->data=7;
    head->next =second;

     //link second and third node
    second->data=12;
    second->next =third;

     //terminate the list at the thord node
    third->data=45;
    third->next =NULL;

    linkedListTraversal(head);
    return 0;
}