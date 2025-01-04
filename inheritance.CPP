//Ineritance
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class addition
{
protected :

	int a,b,c;

	void input()
	{
	cout<<"enter two values"<<endl;
	cin>>a>>b;
	}
	void add()
	{
	input();
	c=a+b;
	cout <<"sum of two no. "<<c<<endl;
	}
};

class subraction : public addition
{
protected :
	void sub()
	{
	input();
	c=a-b;
	cout<<"sub of two no. "<<c<<endl;
	}
};
class multiplication : public subraction
{
protected :
	void mul()
	{
	input();
	c=a*b;
	cout<<"mul of two no."<<c<<endl;
	}
};
class division : public multiplication
{
protected :
	void div()
	{
	input();
	c=a/b;
	cout<<"div of two no."<<c<<endl;
	}
};
class pin : public division
{
public:
	void password()
	{
	int y,n=1234;
	cout<<"enter the pin no."<<endl;
	cin>>y;
	if(y==n)
	menu();
	else
	cout<<"invalid pin"<<endl;
	}
	void menu()
	{
	int ch;
	do
	{
	cout<<"1.sum\n2.sub\n3.mul\n4.div\n0.exit"<<endl;
	cout<<"Enter your choice: "<<endl;
	cin>>ch;
	switch(ch)
	{
	case 1:add();
	break;
	case 2:sub();
	break;
	case 3:mul();
	break;
	case 4:div();
	break;
	case 0: exit(0);
	default : cout<<"Invalid choice...!"<<endl;
	}
	}while(ch!=0);
	}
	pin()
	{
	a=b=c=0;
	}
	~pin()
	{
	}
};

void main()
{
clrscr();
pin z;
z.password();
getch();
}