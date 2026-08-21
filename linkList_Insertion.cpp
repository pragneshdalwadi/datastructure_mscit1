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
    struct node *nd,*head=NULL,*temp,*ptr,*t1,*t2;
    int ch,value,val1,val2;

    do{
        cout<<"\n 1.Insert at First \n 2.Insert at Last \n 3.Insert at Between \n 4.Display \n 5.Exit ";
    
        cout<<"\n Enter The Choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1: cout<<"\n Enter The Value : ";
                    cin>>value;
                    nd = (struct node*)malloc(sizeof(struct node));
                    nd->info = value;
                    nd->next=NULL;
                    temp = head;
                    if(head == NULL)
                        head=nd;
                    else
                    {
                        nd->next = head;
                        head=nd;   
                    }
                    break;

            case 2: cout<<"\n Enter The Value : ";
                    cin>>value;
                    nd = (struct node*)malloc(sizeof(struct node));
                    nd->info=value;
                    nd->next=NULL;

                    if(head==NULL)
                    {
                        head=nd;
                    }
                    else
                    {
                        ptr = head;

                        while(ptr->next != NULL)
                        {
                            ptr = ptr->next;
                        }
                        ptr->next = nd;
                        ptr=nd;
                    }
                    break;

            case 3: cout<<"\n Enter The Val1 : ";
                    cin>>val1;
                    cout<<"\n Enter The Val2 : ";
                    cin>>val2;
                    cout<<"\n Enter The Value : ";
                    cin>>value;
                    
                    nd=(struct node*)malloc(sizeof(struct node));
                    nd->info=value;

                    t1=head;
                    t2=t1->next;

                    while(t1->info!=val1 && t2->info!=val2)
                    {
                        t1=t1->next;
                        t2=t2->next;
                    }

                    if(t1->info==val1 && t2->info==val2)
                    {
                        t1->next=nd;
                        nd->next=t2;
                    }
                    else
                    {
                        cout<<"\n Invalid Input";
                    }
                    break;

            case 4: ptr = head;
            
                    while(ptr != NULL)
                    {
                        cout<<ptr->info<<" ";
                        ptr = ptr->next;
                    }
                    break;

            case 5: exit(0);
                    break;
        }
    }while(1);
}
