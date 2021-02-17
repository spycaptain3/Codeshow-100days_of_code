#include<iostream>
using namespace std;
int main(){
    cout<<" print 5 elements and print sum of that 5 elements "<<endl;
cout<<" type the five integer element"<<endl;


int no[5], i, sum=0;

for(i=0; i<5; i++){
    
    cin>> no[i];
    }
cout<<"elements are : "<<endl;
for(i=0; i<5; i++){

    cout<< no[i]<<endl;
    sum=no[i]+sum;
}
cout<<"total="<<sum;
return 0;
}
