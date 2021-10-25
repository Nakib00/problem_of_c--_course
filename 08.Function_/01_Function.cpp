#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void display(){
    cout<<"Display Functions"<<endl;
}

int sum_two_num(int t,int i){
    int sum = 0;

    sum = t+i;

    return sum;
}

int main(){
int x=10,y=10,sum;

cout<<"Testing"<<endl;

display();

sum = sum_two_num(x,y);

cout<<"sum = "<<sum<<endl;

return 0;
}

