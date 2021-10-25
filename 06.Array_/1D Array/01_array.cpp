/* 
int arr[]={10,11,12,13,14,15}
int arr[10]={10,11,12,13,14,15}
int arr[50];
*/
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
cout<<endl;
cout<<"array print"<<endl;

for(int i=0;i<n;i++){
    cout<<"["<<i<<"] :"<<x[i]<<endl;
}

return 0;
}