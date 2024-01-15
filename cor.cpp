#include<iostream>
#include<math.h>
using namespace std;
inline float Short(float x1,float x2,float y1,float y2)
{
float d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
return d;}
int main(){
int x1,x2,x3,y1,y2,y3;
float d1,d2,d3;
cout<<"Enter 1st coordinate:"<<endl;
cin>>x1>>y1;
cout<<"Enter 2nd coordinate:"<<endl;
cin>>x2>>y2;
cout<<"Enter 3rd coordinate:"<<endl;
cin>>x3>>y3;
d1=Short(x1,x2,y1,y2);
d2=Short(x2,x3,y2,y3);
d3=Short(x3,x1,y3,y1);
if((d1+d2)>d3 && (d2+d3)>d1 && (d3+d1)>d2){
cout<<"Valid Triangle"<<endl;
if(d1<d2 || d1<d3)
cout<<"1st Vertices has shortest distance:"<<d1<<endl;
else if(d2<d1 || d2<d3)
cout<<"2nd Vertices has shortest distance:"<<d2<<endl;
else
cout<<"3rd Vertices has shortest distance:"<<d3<<endl;
}
else
cout<<"Invalid Triangle";
return 0;
}
