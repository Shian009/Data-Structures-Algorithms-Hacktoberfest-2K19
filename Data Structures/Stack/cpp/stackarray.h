#include<iostream>
#include<stdlib.h>
using namespace std;

class MyException : public exception
{
	public:
		string exc() throw()
		{
			return "Stack is empty\n";
		}
};
class MyException2 : public exception
{
	public:
		string exc() throw()
		{
			return "Overflow\n";
		}
};

template<class T>
class MyStack
{
	T* st;
	int tos;
	int size;
	public:
		MyStack(int n)
		{
			tos=-1;
			size=n;
			st=new T[size];
		}
		void push(T item)
		{
			MyException2 e;
			if(tos>=size-1)
			{
				
				throw e; 
			}
			else
			st[++tos]=item;
		}
		T pop()
		{
			MyException e;
			if(tos<0)
			{
				
				throw e;
			}
			else
			return st[tos--];
		}
		void show()
		{
			if(tos<0)
			return;
			else
			{
				for(int i=tos;i>=0;i--)
				cout<<st[i]<<endl;
			}
		}
		T top()
		{
			MyException e;
			if(tos<0)
			{
				
				throw e;
			}
			else
			return st[tos];	
		}
		int empty()
		{
			if(tos<0)
			return 1;
			else
			return 0;
		}
};

