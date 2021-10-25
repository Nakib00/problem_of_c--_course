/*Find Maxima and minimum number from array*/
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

int max=x[0][0];

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(x[i][j]>max){
            max=x[i][j];
        }
    }
}
cout<<"max="<<max<<endl;

int min=x[0][0];

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(x[i][j]<min){
            min=x[i][j];
        }
    }
}
cout<<"min="<<min<<endl;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}