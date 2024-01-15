#include<iostream>
using namespace std;
struct number{ int ac,ex,ph;}
n[2];
int main()
{
 n[1].ac=91;
 n[1].ex=953;
 n[1].ph=124315;
 cout<<"Enter country code";
cin>>n[2].ac;
cout<<"Enter the exchange number";
cin>>n[2].ex;
cout<<"Enter your number";
cin>>n[2].ph;
cout<<"phone number "<<"(+"<<n[1].ac<<")"<<"-"<<n[1].ex<<" "<<n[1].ph<<endl;
cout<<"new number "<<"(+"<<n[2].ac<<")"<<"-"<<n[2].ex<<" "<<n[2].ph<<endl;
return 0;
}
