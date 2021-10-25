/* Take a number from user check it's EVEN or ODD */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter Number: ";
cin>>num;

if(num%2 == 0){
    cout<<"EVEN";
}else{
    cout<<"ODD";
}

return 0;
}
