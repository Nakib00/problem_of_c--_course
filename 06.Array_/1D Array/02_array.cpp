#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int x[50],n,sum;
cout<<"Lanth of array: ";
cin>>n;

for(int i=0;i<n;i++){
    cout<<"["<<i<<"]: ";
    cin>>x[i];
}

sum= x[0]+x[2];

cout<<sum;
return 0;
}