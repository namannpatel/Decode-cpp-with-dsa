// Take 2 integers input and print the greatest of them

#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    if(a>b){
        cout<<"first number "<<a<<" is the largest";
    }
    else{
        cout<<"second number "<<b<<" is the largest";
    }
}
