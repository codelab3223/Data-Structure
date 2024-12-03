#include<iostream>
#include<string.h>
using namespace std;
class stack{
    int top=-1;
    char arr[10];
    public:
bool isOperator(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/' || x=='^' || x=='$')
    {
        return true;
    }
    else{
    return false;
    }
}
int get_precedence(char x)
{
    if(x=='+'|| x=='-')
    {
        return 1;
    }
    else if(x=='*' || x=='/')
    {
        return 2;
    }
    else{
    return 3;
    }

}
bool isFull()
{
    if(top==10-1)
    {
        return true;
    }
    else{
    return false;}
}
bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
char peek()
{
    if(isEmpty())
    {
        cout<<"Stack Empty";
    }
    else{
    char c;
    c=arr[top];
    return c;

    }
}
char push(int a)
{
    if(isFull())
    {
        cout<<"Stack Overflow";
    }
    else{
        top++;
        arr[top]=a;
        cout<<arr[top];
        return arr[top];
    }
}
char pop()
{
    if(isEmpty())
    {
        cout<<"Stack Underflow";
    }
    else
    {
    int x;
    x=arr[top];
  return x;
    }
}
};
int main()
{
    char postfix[100],infix[]="A+B+C",data;
    int index=0;
    stack s;
    for(int i=0;i<strlen(infix);i++)
    {
    	if(infix[i]=='(')
    	{
    		s.push(infix[i]);
		}
		else if(infix[i]==')')
		{
			while(s.peek()!='(')
			{
				data=s.pop();
				postfix[index]=data;
				index++;
			}
			data=s.pop();
		}
		
    else if(s.isOperator(infix[i]))
    {
        if(s.get_precedence(infix[i])>s.get_precedence(s.peek()))
        {
        	s.push(infix[i]);
		}
        else
       {
         while(s.get_precedence(infix[i])>s.get_precedence(s.peek()))
       {
     	data=s.pop();
     	postfix[index]=data;
     	index++;
	   }
	 s.push(infix[i]);
    }}
    else
    {
    	data=infix[i];
    	postfix[index]=data;
    	index++;
	}
    }
    for(int i=0; i<strlen(postfix);i++)
    {
  cout<<postfix[i];
    }
return 0;
}
