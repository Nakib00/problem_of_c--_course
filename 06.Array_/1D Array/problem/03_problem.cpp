/*Find even odd in the array */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int x[50],n;
cout<<"Lanth of array: ";
cin>>n;

for(int i=0;i<n;i++){
    cout<<"["<<i<<"]: ";
    cin>>x[i];
}

for(int i=0;i<n;i++){
    if(x[i]%2==0){
        cout<<"EVEN :"<<x[i]<<" ";
    }else{
        cout<<"ODD : "<<x[i]<<" ";
    }
}
return 0;
}