#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//macros
#define pi 3.14
#define area(r,l) ((pi)*(r)*(l))
#define min(a,b) (((a)<(b))?(a):(b))
//inline function
//advantage
//no extra memory uses
//no function call overhead

inline int maximum(int &a,int &b){
    return (a<b)?a:b;
}

//global function
//dont use this function this is not a good practice
//instead of this use refrence variable
int score=30;
int maximum_area(int a,int b){
    int maxi_area=3.14*a*score/2;
    int maxi2_area=3.14*b*score/2;
    return (maxi_area>maxi2_area)?a:b;

    
}
//default function
//rightmost value should be given the value means "b" should be given the value without this function will not work 
void maximum1(int a,int b=0){
    cout<<a<<" and "<<b<<endl;
}

int main()
{
    int a=13;
    int b=5;
    cout<<pi<<endl;
    cout<<"area of rectangle:"<<area(a,b)<<endl;
    cout<<"min value between a and b:"<<min(a,b)<<endl;
    cout<<"maximum between a and b:"<<max(a,b)<<endl;
    cout<<"maximum area between a and b:"<<maximum_area(a,b)<<endl;
    maximum1(a,b);



    return 0;
}