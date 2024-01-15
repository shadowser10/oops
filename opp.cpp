#include<iostream>
using namespace std;
class date
{
int d,m,y;
public:date()
{cout<<"Enter day:";
cin>>d;
cout<<"Enter month:";cin>>m;
cout<<"Enter year:";cin>>y;cout<<"\n";
}
int leapcheck(int n)
	{if (n%4==0)
		return (29);
	else
		return (28);}
int thirty(int n)
	{if (n<8)
		{if (n%2!=0)
		return (31);
		else
		return (30);}
	else
		{if (n%2==0)
		return (31);
		else
		return (30);}
	}
int valid()
	{
	if ((m<1) || (m>12) || (d<1) || (d>31))
	{cout<<"The date is invalid\n";return 0;}
	else
	{
	if (m==2)
	{
	if (d<=leapcheck(y))
	{cout<<"The date is valid\n";return 1;}
	else
	{cout<<"The date is invalid\n";return 0;}
	}
	else
	{
	if (d<=thirty(m))
	{cout<<"The date is valid\n";return 1;}
	else
	{cout<<"The date is invalid\n";return 0;}
	}
	}
	}

date operator +(int a)
{
if (m==2)
{
if ((d+a)<=leapcheck(y))
{cout<<(d+a)<<"/"<<m<<"/"<<y<<"\n";}
else
{
a=a-(leapcheck(y)-d);
m+=1;
while (a>thirty(m))
{
if (m==2)
{
a=a-leapcheck(y);m+=1;
}
else
{
m+=1;
if (m>12)
{y+=1;m=1;}
a=a-thirty(m);}
}
d=a;
cout<<"The date is "<<d<<"/"<<m<<"/"<<y<<"\n";}}
else
{
if ((d+a)<=thirty(m))
{cout<<(d+a)<<"/"<<m<<"/"<<y<<"\n";}
else
{
a=a-(thirty(m)-d);
m+=1;
while (a>thirty(m))
{
if (m==2)
{
a=a-leapcheck(y);m+=1;}
else
{
m+=1;
if (m>12)
{y+=1;m=1;}
a=a-thirty(m);}
}
d=a;
cout<<"The date is "<<d<<"/"<<m<<"/"<<y<<"\n";}}
}
};

int main()
{date ob;int a;
int c;c=ob.valid();
if (c==1)
{
	cout<<"Enter number of days:"<<endl;
	cin>>a;
	ob=ob+a;
}}

 



