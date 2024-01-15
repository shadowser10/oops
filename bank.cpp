#include<iostream>
 using namespace std;
class date
{
 public: 
   float s=0;
   int dep;
   int withd;
   int bal;

void detials()
{
int accno;
char name[20];
char accty[20];
cout<<"Enter name";
cin>>name;
cout<<"Account number";
cin>>accno;
cout<<"Account type:";
cin>>accty;
  cout<<"NAME :"<<name<<endl;
  cout<<"ACCOUNT NUMBER:"<<accno<<endl;
 cout<<"ACCOUNT TYPE:"<<accty<<endl;
}
void deposit()
{
 cout<<"Enter the amount to deposit";
 cin>>dep;
 bal=dep+s;
 s=bal;
 cout<<"Balance="<<s<<endl;
}
void withdrawl()
{ 
  cout<<"The amount to withdraw";
  cin>>withd;
if (withd>s)
 {
  cout<<"insufficient bank balance";
 }
  else if(withd>20000)
    {
      cout<<"withdrawl limit is 20000"<<endl;
    } 
  else
    {
      bal=s-withd;
      s=bal;
      cout<<"Balance="<<s<<endl;
    }
}
};
int main()
{
 date obj;
 int n;
 do
 {
    cout<<"1.detials"<<endl<<"2.deposit"<<endl<<"3.withdraw"<<endl<<"4.EXIT"<<endl<<"Enter your choice ";
    cin>>n;
  switch(n)
  {
    case 1:obj.detials();
    break;
    case 2:obj.deposit();
    break;
    case 3:obj.withdrawl();
    break;
    case 4:break;
    default:cout<<"Invalid";
    break;
   }
 } while(n!=5);
return 0;}


