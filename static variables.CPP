//for static variables
#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
private:
	char name[20],res[10];
	int rno,m1,m2,m3,total;
	float avg;
	static no_pass;
public:

	void getdata()
	{
	cout<<"enter the roll no. , name and 3 subjects marks"<<endl;
	cin>>rno>>name>>m1>>m2>>m3;
	result();
	}
	void result()
	{
	total=m1+m2+m3;
	avg=total/3.0;
	if(m1>=35 && m2>=35 && m3>=35)
	{
	strcpy(res,"pass");
	no_pass++;
	}
	else
	{
	strcpy(res,"fail");
	}
	}
	void display()
	{
	cout<<rno<<" "<<name<<" "<<m1<<" "<<m2<<" "<<m3<<" "<<total<<" "<<avg<<" "<<res<<endl;
	}
	static void tot_pass()
	{
	cout<<"Total no. of pass"<<no_pass<<endl;
	}
};
int student::no_pass;
void main()
{
clrscr();
student s[10];
int n,i;
cout<<"enter the no of students";
cin>>n;
cout<<"enter the student details";
for(i=0;i<n;i++)
{
s[i].getdata();
}
cout<<"student datas are ";
for (i=0;i<n;i++)
{
s[i].display();
}
student :: tot_pass();
getch();
}



