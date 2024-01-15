#include<iostream>
using namespace std;
class st{
public:
static int x[100];
static int n;
static void getdata()
{
 cout<<"Enter the number of elements required\n";
 cin>>n;
 cout<<"Enter the values\n";
for(int i=0;i<n;i++){
cin>>x[i];
}}
static void avg(){
float a;
for(int i=0;i<n;i++){
a+=x[i];
}a/=n;
cout<<"Average : "<<a<<endl;}
static void mul(){
int a;
cout<<"Enter the value to be multiplied\n";
cin>>a;
for(int i=0;i<n;i++){
x[i]*=a;}
}
static void array(){
int t;
for(int j=0;j<n-1;j++){
for(int i=0;i<n-1;i++){
if(x[i]>x[i+1]){
t=x[i+1];
x[i+1]=x[i];
x[i]=t;}
}}
for(int i=0;i<n;i++){
cout<<x[i]<<endl;
}
}
};
int st :: x[100];
int st :: n;
int main()
{
st s1,s2,s3;
s1.getdata();
s1.avg();
s2.mul();
s1.avg();
s3.array();
return 0;
}

