#include<iostream>
#include<conio.h>

void Qinsert(int [],int *,int *,int);
int Qdelete(int [],int *,int *);
void Qdisplay(int [],int *,int *);
void Qpeek(int [],int *);

int main()
{
	int q[10],front=-1,rear=-1,ch,val,delVal;

	do
	{
		cout<<"\n 1. Insert \n 2. Delete \n 3. Display \n 4. Peek \n 5. Exit \n";
		
		cout<<"\n Enter Your Choice : ";
		cin>>ch;

		switch(ch)
		{
			case 1 : cout<<"\n Enter The Val : ";
				 cin>>val;
				
				 Qinsert(q,&front,&rear,val);
				 break;

			case 2 : delVal = Qdelete(q,&front,&rear);
			
					 if(delVal != -1)
					 	cout<<"\n Deleted Value : "<<delVal;
				 break;

			case 3 : Qdisplay(q,&front,&rear);
				 break;

			case 4 : Qpeek(q,&front);
				 break;
				 
		    case 5 : cout<<"Program Is Ended";
		             break;

			default : cout<<"\n Wrong Choice";
		}
	}while(ch != 5);
	
	return 0;
}

void Qinsert(int q[10],int *front,int *rear,int val)
{
	if(*rear == 9)
	{
		cout<<"\n Queue is overflow";
		return;
	}

	*rear = *rear + 1;
	q[*rear] = val;

	if(*front == -1)
	{
		*front = 0;
	}
}

int Qdelete(int q[10],int *front,int *rear)
{
	int temp = 0;

	if(*front == -1)
	{
		cout<<"\n Queue is Empty";
		return -1;
	}

	temp = q[*front];

	if(*front == *rear)
	{
		*front=*rear=-1;
	}
	else
	{
		*front = *front + 1;	
	}

    return temp;
}

void Qdisplay(int q[10],int *front,int *rear)
{
	int i = *front;

	if(*front == -1)
	{
		cout<<"\n Queue Is Empty";
		return;
	}

	while(i <= *rear)
	{
		cout<<" "<<q[i];
		i = i + 1;
	}
}

void Qpeek(int q[10],int *front)
{
	if(*front == -1)
	{
		cout<<"\n Queue Is Underflow";
		return;
	}

	cout<<"Peek Element : "<<q[*front];
}
