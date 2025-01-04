//polymorphism
#include<iostream.h>
#include<conio.h>
class arith
{
int x,y,z;
float f1,f2,f3;
double d1,d2,d3;

public :
arith()
{
x=y=z=0;
f1=f2=f3=0;
d1=d2=d3=0;
}
~arith()
{
cout<<"object is deleted"<<endl;
}
int sum(int a,int b)
{
x=a;
y=b;
z=x+y;
return z;
}
float sum(float a, float b)
{
f1=a;
f2=b;
f3=f1+f2;
return f3;
}
double sum(double a,double b)
{
d1=a;
d2=b;
d3=d1+d2;
return d3;
}
};

void main()
{
clrscr();
arith p;
int s=p.sum(2,4);
cout<<"sum of int "<<s<<endl;

arith p2;
float s2=p2.sum(2.5,3.5);
cout<<"sum of float"<<s2<<endl;

arith p3;
double s3=p3.sum(123429.29383,1234839.83839);
cout<<"sum of double"<<s3<<endl;

getch();
}