#include <iostream>
using namespace std;
int main(){
int l, b, a, p;
cout<<"Find the Area and Perimeter of a Rectangle :"<<endl;

cout<<"-------------------------------------------------"<<endl;
cout<<"Input the length of the rectangle :"<<endl;
cin>> l;
cout<<"Input the width of the rectangle : "<<endl;
cin>>b;

    a=l*b;
    p=2*l+2*b;
cout<<"The area of the rectangle is :"<<a<<endl; 
cout<<"The perimeter of the rectangle is :"<<p<<endl;
return 0;
}
