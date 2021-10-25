/*Take a number from user and chack it is a prime number*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int y,isprime=1;

cout<<"Enter: ";
cin>>y;

for(int i=2; i<y; i++){
    if(y%i==0){
        isprime=0;
        break;
    }
}
if(isprime==1){
    cout<<"prime";
}else{
    cout<<"Not prime";
}
return 0;
}