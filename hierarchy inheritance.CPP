#include<iostream.h>
#include<conio.h>
class vehicle
{
protected:
char reg_no[15];
int model;
public:
vehicle()
{
cout<<"\nenter the reg no and model of the vehicle";
cin>>reg_no>>model;
}
void print()
{
cout<<"\nreg no"<<reg_no;
cout<<"\nmodel"<<model;
}
};
class two_wheel:public vehicle
{
protected:
int no_gear;
int power;
public:
two_wheel()
{
cout<<"\nenter the no. of gear and power";
cin>>no_gear>>power;
}
void print1()
{
print();
cout<<"\nno. of gear:"<<no_gear;
cout<<"\npower:"<<power;
}
};
class scooter:public two_wheel
{
protected:
char manuf[20];
char owner[20];
public:
scooter()
{
cout<<"\nenter manufacture and owner";
cin>>manuf>>owner;
}
void print2()
{
print1();
cout<<"\nmanufacture:"<<manuf;
cout<<"\nowner:"<<owner;
}
};
class four_wheel:public vehicle
{
protected:
char fuel[20];
int no_cylinder;
public:
four_wheel()
{
cout<<"\ngive the fuel type and no. of cylinder";
cin>>fuel>>no_cylinder;
}
void print3()
{
print();
cout<<"\nfuel type:"<<fuel;
cout<<"\nno. of cylinder:"<<no_cylinder;
}
};
class car:public four_wheel
{
protected:
char name[20];
char owner[20];
public:
car()
{
cout<<"\nenter the car name and owner name";
cin>>name>>owner;
}
void print4()
{
print3();
cout<<"\nname of the car:"<<name;
cout<<"\nowner name:"<<owner;
}
};


void main()
{
clrscr();
cout<<"\n\tmain menu";
cout<<"\n\t************";
cout<<"\n1.two wheeler";
cout<<"\n2.four wheeler";
cout<<"\nenter your choice:";
int ch;
cin>>ch;
if(ch==1)
{
scooter s1;
s1.print2();
}
else if(ch==2)
{
car c1;
c1.print4();
}
else
cout<<"\ninvalid choice!....";
getch();
}


