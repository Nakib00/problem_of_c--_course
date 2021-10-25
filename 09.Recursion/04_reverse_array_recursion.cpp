//10 20 30 == 30 20 10 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int rev_array(int arr[],int s,int e){
int t;
if(s<e){
    t = arr[s];
    arr[s]=arr[e];
    arr[e]=t;

    rev_array(arr,s+1,e-1);
}
return 0;
}


int main(){
int arr[5]={0,1,2,3,4},n=5;

rev_array(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
}