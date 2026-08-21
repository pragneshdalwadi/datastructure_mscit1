#include<iostream>

using namespace std;

void push(int s[10],int *top,int val)
{
    if(*top == 9)
    {
        cout<<"\n Stack Overflow";
        return;
    }

    *top = *top + 1;
    s[*top] = val;
}

void pop(int s[10],int *top)
{
    if(*top == -1)
    {
        cout<<"\n Stack is empty";
        return;
    }

    cout<<"\n Poped Value : "<<s[*top];
    *top = *top - 1;
}

void display(int s[10],int top)
{
    int i;

    if(top == -1)
    {
        cout<<"\n Stack is empty";
        return;
    }

    for(i=top;i>=0;i--)
    {
        cout<<"\n Stack : "<<s[i];
    }
}

int main()
{
    int stack[10];
    int top = -1,val,ch;

    do{
        cout<<"\n 1.push \n 2.pop \n 3.display \n 0.exit";

        cout<<"\n Enter Your Choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1: cout<<"\n Enter The Value : ";
                    cin>>val;
                    push(stack,&top,val);
                    break;

            case 2: pop(stack,&top);
                    break;

            case 3: display(stack,top);
                    break;
        }
    }while(1);
}
