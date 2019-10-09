#include<iostream>
#include<stdlib.h>

using namespace std;
struct node
{
	int data;
	node* next;
}*top, *ptr, *ptr1;
 
node *create(int n)
{
	ptr1 =new node;
	ptr1->data=n;
	ptr1->next= NULL;
	return ptr1;
	 
}
void display(node *np)
{	
	while(np!= NULL)
	{
		if(np->next==NULL)
		{
			cout<<np->data;
		}
		else
		cout<<np->data<<"->";
		np=np->next;
	}
	cout<<"\n";
}
void push(node *np)
{
	
	if(top ==NULL)
	{
		top = np;
	}else{
		np->next=top;
		top =np;	
	     }
	     display(top);
}

void pop()
{
	node *t;
	if(top == NULL)
	{
		cout<<"underflow\n";
	}else
	{
		t =top;
		top= top->next;
	}
delete t;
display(top);
}
void clear(Node* head)
{
	node *t=head;
	if(top == NULL)
	{
		cout<<"underflow\n";
	}else
	{
		while(t!=NULL)
		{
			
			t =top;
		        top= top->next;
		        delete t;
		}
		t=NULL;
	}
	cout<<"Linked List has been cleared\n";
}

