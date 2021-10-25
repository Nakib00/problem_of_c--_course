/* Searching a number (Linear search) in the array */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int x[50],n,key;
cout<<"Lanth of array: ";
cin>>n;

for(int i=0;i<n;i++){
    cout<<"["<<i<<"]: ";
    cin>>x[i];
}

cout<<"Enter the key: ";
cin>>key;

for(int i=0;i<n;i++){
    if(key==x[i]){
        cout<<"Found ";
    }
}

return 0;
}