#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int info;
    struct node *next;
};

int main()
{
    struct node *nd,*head=NULL,*temp,*ptr;

    nd = (struct node *)malloc(sizeof(struct node));

    nd->info = 10;
    nd->next = NULL;

    if(head == NULL)
    {
        head = nd;
    }

    nd = (struct node *)malloc(sizeof(struct node));
    nd->info = 20;
    nd->next = NULL;
    head->next = nd;
    temp=nd;

    nd = (struct node *)malloc(sizeof(struct node));
    nd->info = 30;
    nd->next = NULL;
    temp->next = nd;
    temp = nd;

    ptr = head;

    while(ptr != NULL)
    {
        cout<<ptr->info<<" ";
        ptr = ptr->next;
    }
}
