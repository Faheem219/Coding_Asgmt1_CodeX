#include<iostream>
using namespace std;

int main(){

    int n;
    float a,b,res;
    cout<<"Please enter the number associated with the desired operation:\
\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Absolute Value"<<endl;
    cin>>n;

    if (n==1){
        cout<<"\nEnter 1st number and 2nd number:"<<endl;
        cin>>a>>b;
        res=a+b;
        cout<<"\nThe result is: "<<res<<endl;
    }
    else if (n==2){
        cout<<"\nEnter 1st number and 2nd number:"<<endl;
        cin>>a>>b;
        res=a-b;
        cout<<"\nThe result is: "<<res<<endl;
    }
    else if (n==3){
        cout<<"\nEnter 1st number and 2nd number:"<<endl;
        cin>>a>>b;
        res=a*b;
        cout<<"\nThe result is: "<<res<<endl;
    }
    else if (n==4){
        cout<<"\nEnter 1st number and 2nd number:"<<endl;
        cin>>a>>b;
        if (b!=0){
            res=a/b;
            cout<<"\nThe result is: "<<res<<endl;
        }
        else{
            cout<<"\nCannot divide by zero!"<<endl;
        }
        
    }
    else if (n==5){
        cout<<"\nEnter the number:"<<endl;
        cin>>a;
        res=abs(a);
        cout<<"\nThe result is: "<<res<<endl;
    }
    else{
        cout<<"\nPlease enter a valid number."<<endl;
    }

    return 0;

}