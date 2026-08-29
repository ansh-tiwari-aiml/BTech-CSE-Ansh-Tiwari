//Topic: Headerfiles and Operator
//Name: 05_Headerfiles_and_Operator.cpp
//Author: Ansh Tiwari
//Date: 29-june-2026
//Course: BTech Cse

//There are Two Types of Headerfiles
//1. System Header Files : It Comes with the Compiler

#include<iostream>
//2. user defined headerfiles : it is written by the programmer
// #include "this . h" // --> This will produce an error if this h is no present in the current directory
using namespace std;
int main(){
  int a=4 , b=5;
  cout<<"operators in c++: " << endl;
  cout<<"following are the types of operators in c++ "<<endl;
  //Arithmetic operators
  cout <<" The value of a+b is "<<a+b<<endl;
    cout <<" The value of a-b is "<<a-b<<endl;  cout <<" The value of a*b is "<<a*b<<endl;
     cout <<" The value of a/b is "<<a/b<<endl;
       cout <<" The value of a%b is "<<a%b<<endl;
         cout <<" The value of a++is "<<a++<<endl;
           cout <<" The value of a--is "<<a--<<endl;
             cout <<" The value of ++a is "<<++a<<endl;
               cout <<" The value of --a is "<<--a<<endl;
                 cout <<endl;
                 //Assignment operators--> used to assign values to variables
                 //int a = 3 , b = 9;
                 //char d = 'd';
                 //Comparison operators
                 cout<<"following are the comparison operators in c++ "<<endl;
                   cout <<" The value of a==b is "<<(a==b) <<endl;
     cout <<" The value of a!=b is "<<(a!=b) <<endl;
       cout <<" The value of a>=b is "<<(a>=b) <<endl;
         cout <<" The value of a<=b is "<<(a<=b) <<endl;
           cout <<" The value of a>b is "<<(a>b) <<endl;
             cout <<" The value of a<b is "<<(a<b) <<endl;
             //logical operators
             cout <<"following are the logical operator in c++ "<<endl;
             cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"
             <<((a==b)&&(a<b))<<endl;
             cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"
             <<((a==b) || (a<b))<<endl;
  cout<<"The value of this logical not operator (!(a==b)) is:"
  <<(!(a==b))<<endl;
             
       return 0;
}