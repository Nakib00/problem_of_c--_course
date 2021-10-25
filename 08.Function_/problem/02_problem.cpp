/*prime number check using function*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int prime_check(int y,int isprime){
    for(int i=2; i<y; i++){
    if(y%i==0){
        isprime=0;
        break;
    }
}
return isprime;
}

int main(){
int y,isprime=1;

cout<<"Enter: ";
cin>>y;

isprime = prime_check(y,isprime);

if(isprime==1){
    cout<<"prime";
}else{
    cout<<"Not prime";
}
return 0;
}