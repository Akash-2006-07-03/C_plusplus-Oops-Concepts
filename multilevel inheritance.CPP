//multi level inheritance
#include<iostream.h>
#include<conio.h>
class det1
{
protected:
	char regno[20];
	char fuel[20];
	void reg()
	{
	cout<<"enter reg no."<<endl;
	cin>>regno;
	cout<<"enter fuel type"<<endl;
	cin>>fuel;
	}
};
class four:public det1
{
protected:
	int seat;
	int crmdl;
	float price1;
	char carname[20];
	four()
	{
	price1=1000;
	}
	void fourdet()
	{
	cout<<"enter car name"<<endl;
	cin>>carname;
	cout<<"enter no. of seats"<<endl;
	cin>>seat;
	cout<<"enter enter car model no."<<endl;
	cin>>crmdl;

	}
};
class two:public four
{
protected:
	int bkmdl;
	char bikename[20];
	float price2;
	two()
	{
	price2=2000;
	}
	void twodet()
	{
	cout<<"enter bike name"<<endl;
	cin>>bikename;
	cout<<"enter the bike model no."<<endl;
	cin>>bkmdl;
	}
};
class cust:public two
{
protected:
	char name[20];
	double mobno;
	int user;
	void custdet()
	{
	cout<<"enter your name"<<endl;
	cin>>name;
	cout<<"enter your mobile no."<<endl;
	cin>>mobno;
	choice();
	}
	void choice()
	{
	cout<<"press l to purchase car"<<endl;
	cout<<"press 2 to purchase bike"<<endl;
	cin>>user;
	if(user==1)
	{
	reg();
	fourdet();
	}
	else if(user==2)
	{
	reg();
	twodet();
	}
	else
	cout<<"entered wrong choice...!"<<endl;
	}
};
class bill:public cust
{
protected:
	int fitting_charge;
	float total;
public:
	bill()
	{
	custdet();
	fitting_charge=1000;
	if(user==1)
	total=price1+fitting_charge;
	else
	total=price2+fitting_charge;
	}
	void print()
	{
	cout<<"Reg no. : "<<regno<<endl;
	cout<<"Customer name : "<<name<<endl;
	cout<<"Mobile number : "<<mobno<<endl;
	if(user==1)
	{
	cout<<"Car name : "<<carname<<endl;
	cout<<"No. of seats : "<<seat<<endl;
	cout<<"Car model no. : "<<crmdl<<endl;
	cout<<"Fuel type : "<<fuel<<endl;
	}
	else
	{
	cout<<"Bike name : "<<bikename<<endl;;
	cout<<"Bike model : "<<bkmdl<<endl;
	cout<<"Fuel type : "<<fuel<<endl;
	}
	cout<<"Total price : "<<total<<endl;
	}
};

void main()
{
bill x;
x.print();
getch();
}