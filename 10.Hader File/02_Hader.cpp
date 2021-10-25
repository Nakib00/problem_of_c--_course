#include<bits/stdc++.h>
#include<iostream>
#include"calculator.h"
using namespace std;

int main(){
int x,y;
float result;
char k;
cout<<"Enter your Number: ";
cin>>x>>k>>y;

result = Calculator(x,y,k);

cout<<"Result: "<<result;

return 0;
}