#include<iostream>
using namespace std;

int main(){

    float a,b,c;
    cout<<"Please enter three numbers:"<<endl;
    cin>>a>>b>>c;

    if (a>=b && a>=c){
        cout<<"\nThe greatest number is "<<a<<endl;
    }
    else if (b>=a && b>=c){
        cout<<"\nThe greatest number is "<<b<<endl;
    }
    else{
        cout<<"\nThe greatest number is "<<c<<endl;
    }
    return 0;

}