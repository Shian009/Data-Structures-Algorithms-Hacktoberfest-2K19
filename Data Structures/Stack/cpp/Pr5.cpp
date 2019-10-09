#include<iostream>
#include<stdlib.h>
#include "stackarray.h"
using namespace std;



int main()
{
	
	int n,ch2,item;
	cout<<"\nEnter the size of the stack:";
	cin>>n;
	MyStack<int>ob1(n);
	
	do{
	
	cout<<"\n1.Push\n2.Pop\n3.Show\n4.exit";
	cin>>ch2;
	
	if(ch2>=1&&ch2<=3)
	{
		switch(ch2)
		{
		
			case 1: cout<<"Enter item to be pushed:";
				cin>>item;
				try
				{
					ob1.push(item);
				}		
				catch(MyException2& e)
				{
					cout<<e.exc();
				}
				break;
			case 2:	try
				{
					int r=ob1.pop();
					cout<<"successfully popped out "<<r<<"\n";
				}
				catch(MyException& e)
				{
					cout<<e.exc();
				}
				break;
			case 3:	ob1.show();
				break;
		}
	}
	}while(ch2>=1&&ch2<=3);
	return 0;
}
				
