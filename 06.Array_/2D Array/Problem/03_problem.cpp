/*frequency coutnt*/
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

int f,p=0;
cout<<"Values is: ";
cin>>f;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(x[i][j]==f){
            p++;
        }
    }
}

cout<<"Values hava: "<<p<<endl;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}