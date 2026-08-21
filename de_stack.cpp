#include<iostream>

using namespace std;

void push(int s[10],int *top1,int *top2, int val)
{
    if(*top1+1 == *top2)
    {
        cout<<"\nStack Overflow";
        return;
    }
    
    int stackChoice;
    
    cout<<"\n 1.pre-stack 2.de-stack";
    
    cout<<"\nEnter The StackChoice : ";
    cin>>stackChoice;
    
    if(stackChoice == 1)
    {
        *top1 = *top1 + 1;
        s[*top1] = val;
    }
    else if(stackChoice == 2)
    {
        *top2 = *top2 - 1;
        s[*top2] = val;
    }
    else{
        cout<<"\nWrong Choice Please Choice Only 1 or 2";
    }
}

void pop(int s[10],int *top1,int *top2)
{
    int popChoice = 0;
    
    cout<<"\n1. Pop From Pre-stack \n 2. Pop From De-stack";
    
    cout<<"Enter The PopChoice : ";
    cin>>popChoice;
    
    if(popChoice == 1)
    {
        if(*top1 == -1)
        {
            cout<<"Stack is Empty";
            return;
        }
        cout<<"pre-stack value pop : "<<s[*top1];
        *top1 = *top1 - 1;
    }
    else if(popChoice == 2)
    {
        if(*top2 == 10)
        {
            cout<<"Stack is Empty";
            return;
        }
        cout<<"De-stack value pop : "<<s[*top2];
        *top2 = *top2 + 1;
    }
}

void display(int s[10],int top1,int top2)
{
    int i=0,j=0;
    if(top1 == -1)
    {
        cout<<"\nPre-Stck is Empty";
    }
    else{
        for(i=top1;i>=0;i--)
        {
            cout<<"\n Pre-stack : "<<s[i];
        }
    }
    
    if(top2 == 10)
    {
        cout<<"\nDe-stack is Empty";
    }
    else{
        for(j=top2;j<10;j++)
        {
            cout<<"\nDe-stack : "<<s[j];
        }
    }
}

int main()
{
    int stack[10];
    int top1 = -1,top2 = 10,ch,val;
    
    do
    {
        cout<<"\n 1.Push \n 2.Pop \n 3.Display \n 0. Exit";
        
        cout<<"\nEnter Your Choice : ";
        cin>>ch;
        
        switch(ch)
        {
            case 1: cout<<"\nEnter The Value : ";
                    cin>>val;
                    push(stack,&top1,&top2,val);
                    break;
                    
            case 2: pop(stack,&top1,&top2);
                    break;
                    
            case 3: display(stack,top1,top2);
                    break;
                    
            case 0: exit(0);
                    break;
                    
            default: cout<<"\nWrong Choice";
                     break;
        }
    }while(1);
    
}
