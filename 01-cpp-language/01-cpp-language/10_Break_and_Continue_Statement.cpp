//Topic:Break_and_Continue_Statement
//Name:10_Break_and_Continue_Statement.cpp
//Author:Ansh Tiwari
//Date:10-July-2026
//Couse:Btech Cse

#include<iostream>
using namespace std;
int main(){
    //for (int i=0 ; i<40; i++)
    //{
        // /*code*/
        // if ( i==2){
            //break ;
            //}
            //cout<<i<<endl;
            //}
            for(int i=0; i<40; i++)
            { /*code*/
            if(i==2) {
                continue; 
                }
                cout<<i<<endl;
            }
            return 0;
}