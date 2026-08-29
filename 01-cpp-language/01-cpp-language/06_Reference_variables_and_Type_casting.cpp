//Topic: Reference variables and Typecasting
//Name: 06_Reference_variables_and_Type_casting.cpp
//Author: Ansh Tiwari
//Date: 30_june-2026
//Course: BTech Cse

#include<iostream>
using namespace std;
int c = 45;
int main(){
    //**************Build in Data Types************
    // int a,b,c;
    //cout<<"Enter the value of a:"<<endl;
    //cin>>a;
    //cout<<"Enter the value of b:"<<endl;
    //cin>>b;
    //cout<<"The sum is "<<c<<endl;
    //cout<<"The global c is <<::<;
    //*******************float,double and long double literals************
    //float d = 34.4f;
    //long double e = 34.4L;
    //cout<<"The size of 34.4 is "size of (34.4)<<endl;
    //cout<<"The size of 34.4f is "<<size of (34.4f)<<endl;
    //cout<<"The size of 34.4f is "<<size of (34.4f)<<endl;
    //cout<<"The size of 34.4l is "<<size of (34.4l)<<endl;
    //cout<<"The size of 34.4L is "<<size of (34.4L)<<endl;
    //cout<<"The value of e is "<<e;
    
    //****************Reference variables***********
    //AnshTiwari------>Anshpandit---->panditji----->tiwariji
    //float X = 455;
    //float & Y = X;
    //cout<<X<<endl;
    //cout<<Y<<endl;
    //***********Typecasting**********
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int (b);
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    return 0;
    
}