 #include <iostream>
using namespace std;
int power(int a ,float b)
{
int s=1;
for (int i=0;i<b;i++)
s=s*a;
return s;
}
float power(float a,float b)
{
float s=1;
for (int i=0;i<b;i++)
s=s*a;
return s;
}

int main()
{
int c;
cout<<"1.Integer\n2.Float\nEnter your choice:";
cin>>c;
if (c==1)
{
int a,b;
cout<<"Enter the value:";
cin>>a;
cout<<"Enter the power:";
cin>>b;
cout<<power(a,b)<<"\n";
}
else if (c==2)
{
float a,b;
cout<<"Enter the value:";
cin>>a;
cout<<"Enter the power:";
cin>>b;
cout<<power(a,b)<<"\n";
}
 
else
cout<<"Invalid choice\n";
return 0;
}
 
