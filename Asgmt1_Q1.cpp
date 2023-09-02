#include<iostream>
using namespace std;

int main(){

    int age;
    char name[100],college[100];

    cout<<"Please enter your full name:\n";
    cin.getline(name,100);

    cout<<"\nPlease enter your age:\n";
    cin>>age;
    cin.ignore();
    
    cout<<"\nPlease enter your college name:\n";
    cin.getline(college,100);

    cout<<"\nHello "<<name<<", I see you are "<<age<<" years old\
 and are currently studying at "<<college;

    return 0;

}