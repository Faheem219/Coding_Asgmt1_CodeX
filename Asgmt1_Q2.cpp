#include<iostream>
using namespace std;

int main(){

    cout<<"Range of char: "<<CHAR_MIN<<" to "<<CHAR_MAX<<endl;
    cout<<"Range of short int: "<<SHRT_MIN<<" to "<<SHRT_MAX<<endl;
    cout<<"Range of long int: "<<LONG_MIN<<" to "<<LONG_MAX<<endl;
    cout<<"Range of double: "<<numeric_limits<double>::min()<<\
    " to "<<numeric_limits<double>::max()<<endl;

    return 0;
    
}