#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// n=3 = 1*2*3 = ?

int fact(int n){//3  //2 //1
if(n>1){
    return n * fact(n-1); // 3*2*1
}else{
    return 1;
}

}

int main(){
int n,sum;

cout<<"Enter the number :";
cin>>n;//3

sum = fact(n);

cout<<"Factorial "<<n<<" is :"<<sum;
return 0;
}