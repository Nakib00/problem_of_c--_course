/* Take a number from user and check it's positive,negative,Neither positive or negative */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter Number: ";
cin>>num;

if(num>0){
    cout<<"positive";
}else if(num<0){
    cout<<"negative";
}else{
    cout<<"Neither positive or negative";
}

return 0;
}