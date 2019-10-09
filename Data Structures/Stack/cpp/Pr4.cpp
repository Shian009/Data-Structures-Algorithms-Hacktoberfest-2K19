#include<iostream>
#include<stdlib.h>
#include "stacklink.h"
using namespace std;

int main()
{
	int choice;
	char ch;
	int data;
	do
	{
		cout<<"MENU\n1-PUSH\n2-POP\n3-DISPLAY\n4-CLEAR LINKED LIST\n5-EXIT\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		switch(choice)
		{	
			case 1:{ 
				cout<<"Enter the data of the new node\n";
				cin>>data;
				ptr= create(data);
				if(ptr!=NULL)
				{
					cout<<"Node created successfully\n";
				}else
				{
					cout<<"Error creating node\n";
				}
				push(ptr);
			       }
				break;
			case 2: pop();
				break;
			case 3: cout<<"The linked list is \n";
				display(top);
				break;
			case 4: clear();
				break;
			case 5: exit(0);
			default: cout<<"Wrong Choice\n";
				 break;
		}	
		cout<<"Do you want to continue y or n\n";
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	return 0;
}
		
