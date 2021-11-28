//linked liist travesrsal
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linkedTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout <<"Element: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //allocting memory for nodes in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //link first and second node;
    head->data = 7;
    head->next = second;

    //link second and third node;
    second->data = 11;
    second->next = third;

    //link third and fourth node;
    third->data = 40;
    third->next = fourth;

    //terminat the list at fourth node
    fourth->data = 66;
    fourth->next = NULL;

    linkedTraversal(head);
    return 0;
}