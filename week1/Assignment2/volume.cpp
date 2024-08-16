// WAP for finding the volume of the cylinder by taking radius and height as input

#include<iostream>
using namespace std;
int main(){
    float r, h;
    cout<<"Enter radius of cylinder : ";
    cin>>r;
    cout<<"Enter height of cylinder : ";
    cin>>h;
    float vol = 3.14 * r * r * h;
    cout<<"Volume of cylinder : "<<vol;
    return 0;
}