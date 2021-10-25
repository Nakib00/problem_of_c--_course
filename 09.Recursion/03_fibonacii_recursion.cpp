// 0 1 1 2 3 5 8 13
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void fib(int a,int b,int n){ //6,5,4,3,2,1,0
int sum ;
if(n>0){
    sum = a+b;
    cout<<" "<<sum; // 0 1 1 2 3 5 8 13
    a = b;
    b=sum;
    fib(a,b,n-1);
}
}

int main(){
int n,a=0,b=1;

cout<<"Enter fib: ";
cin>>n; //8

cout<<" fib :"<<a<<" "<<b;

fib(a,b,n-2);



return 0;
}