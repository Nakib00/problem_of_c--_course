/*Sum of all number of 2d array*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int x[10][10],r,c;
cout<<"Row: ";
cin>>r;
cout<<"Colum: ";
cin>>c;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<"["<<i<<"]"<<"["<<j<<"]: ";
        cin>>x[i][j];
    }
}

int sum=0;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        sum=sum+x[i][j];
    }
}

cout<<"sum: "<<sum<<endl;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}