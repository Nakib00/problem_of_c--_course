/* write a program that check number is greater than 50 and less than 100 and 
divisible by 13 or 9*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter Number: ";
cin>>num;

if((num>50) && (num>100) && (num%13==0) || (num%9==0)){
    cout<<"YES";
}else{
    cout<<"NO";
}

return 0;
}