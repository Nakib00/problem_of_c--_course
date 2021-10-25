/*Find prime number in array*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int x[50],n,p;
cout<<"Lanth of array: ";
cin>>n;

for(int i=0;i<n;i++){
    cout<<"["<<i<<"]: ";
    cin>>x[i];
}

for(int i=0;i<n;i++){
    p=1;
    for(int j=2; j<x[i]; j++){
        if(x[i]%j==0){
            p=0;
            break;
        }
    }
    if(p==1){
        cout<<x[i]<<" ";
    }
}
return 0;
}