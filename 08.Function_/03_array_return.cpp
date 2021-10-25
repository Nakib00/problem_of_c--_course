/*Array return from function*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int* array_input(int n,int x[]){

    for(int i=0;i<n;i++){
        cout<<i<<" :";
        cin>>x[i];
    }

    return x;
}

int main(){
int x[5];

int* arr = array_input(5,x);

cout<<arr[0]<<" "<<x[1]<<" "<<x[2];

return 0;
}