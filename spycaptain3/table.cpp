#include<iostream>
using namespace std;

int main(){
    cout<<"Print the multiplication table of a number upto 10:"<<endl;
    int i , num;
    cin>>num;
    cout<<endl;
    for(i=1; i<=10; i++){

        cout<<num<<"x"<<i<<"="<<num*i<<endl;
        

    }
    return 0;
}
