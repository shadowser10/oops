#include <iostream>
using namespace std;
class num
{
public:int a;
	void assign()
	{
	cout<<"Enter value:";
	cin>>a;
	}
};
void swap(int a,int b)
{int temp;
temp=a;
a=b;
b=temp;
cout<<a<<b<<"\n";
}
void swap(int *a,int *b)
{int temp;
temp=*a;
*a=*b;
*b=temp;
cout<<*a<<*b<<"\n";
}
void swapr(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<a<<b<<"\n";
}
int main()
{
num ob1,ob2;
ob1.assign();
ob2.assign();
int c;
cout<<"1.Call by value\n2.Call by address\n3.Call by refernce\nEnter your choice:";
cin>>c;
if (c==1)
{swap(ob1.a,ob2.a);}
else if (c==2)
{swap(&ob1.a,&ob2.a);}
else if(c==3)
{swapr(ob1.a,ob2.a);}
else 
cout<<"Invalid Choice\n";
return 0;
}

