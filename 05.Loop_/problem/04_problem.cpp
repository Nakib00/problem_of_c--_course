/*Take number from user and calculat it's factoriul*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std; //5! = 1*2*3*4*5 = 120 
int main(){
int x,fact=1;

cout<<"enter number: ";
cin>>x;

for(int i=1; i<=x; i++){
    fact = fact*i;      
}
cout<<"fact: "<<fact;
return 0;
}