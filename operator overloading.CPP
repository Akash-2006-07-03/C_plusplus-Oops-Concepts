//operator overloading
#include<iostream.h>
#include<conio.h>
class complex
{
private:
	float x,y;
public:
	void getdata(float a,float b)
	{
	x=a;
	y=b;
	}
	void print()
	{
	cout<<"("<<x<<")+i("<<y<<")"<<endl;
	}
	complex operator +(complex c2)
	{
	complex k;
	k.x=x+c2.x;
	k.y=y+c2.y;
	return k;
	}
       /*	complex sum(complex c1,complex c2)
	{
	complex k;
	k.x=c1.x+c2.x;
	k.y=c1.y+c2.y;
	return k;
	}*/
};

void main()
{
clrscr();
complex z1,z2,z3;
z1.getdata(4.2,3.2);
cout<<"z1=";
z1.print();
z2.getdata(1.2,3.7);
cout<<"z2=";
z2.print();
z3=z1+z2;
//z3=z3.sum(z1,z2);
cout<<"z3=";
z3.print();
getch();
}
