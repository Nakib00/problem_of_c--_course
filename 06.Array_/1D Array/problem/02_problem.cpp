/*Find Maxima and minimum number from array*/
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
int max = 0; //5,6,3 max=1   i=0,1.2
for(int i=0;i<n;i++){ //x[i]=3>x[max]=6
    if(x[i]>x[max]){
        max = i;
    }
}
cout<<x[max]<<" "<<max<<endl;

int min = 0; 
for(int i=0;i<n;i++){ 
    if(x[i]<x[min]){
        min = i;
    }
}
cout<<x[min]<<" "<<min<<endl;
return 0;
}