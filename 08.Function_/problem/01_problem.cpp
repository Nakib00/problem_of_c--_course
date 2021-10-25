/*Make a calculator using function*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Calculator(int x, int y,char k){
switch(k){
    case '+':cout<<x<<"+"<<y<<" = "<<x+y;
            break;
    case '-':cout<<x<<"-"<<y<<" = "<<x-y;
            break;
    case '*':cout<<x<<"*"<<y<<" = "<<x*y;
            break;
    case '/':cout<<x<<"/"<<y<<" = "<<x/y;
            break;
    }
}

int main(){
int x,y;
char k;
cout<<"Enter your Number: ";
cin>>x>>k>>y;

Calculator(x,y,k);

return 0;
}