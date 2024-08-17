// Given the radius of the circle, predict whether numerically 
//the area of this circle is larger than the circumference or not

#include<iostream>
using namespace std;
int main(){
    float r, a, p; cout<<"radius of circle : "; cin>>r;
    a = 3.14 * r * r;
    p = 2 * 3.14 * r;
    if(a>p){
        cout<<"area is greater than circumference";
    }
    else{
        cout<<"area is not greater than circumference";
    }
}
