#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,c,d,e;
 cout<<"Enter three sides";
 cin>>a>>b>>c;
if((a+b>c)&&(b+c>a)&&(a+c>b))
{
 cout<<"Valid triangle"<<endl;
 d=(a+b+c)/2;
 e= sqrt(d*(d-a)*(d-b)*(d-c));
 cout<<"Area ="<<e<<endl;
} 
else
{
 cout<<"invalid";
}
return 0;
}
