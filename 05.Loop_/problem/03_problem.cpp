/*Take tow integer from user and display all the integer between them*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int x,y;
cout<<"Enter x: ";
cin>>x;
cout<<"Enter y: ";
cin>>y;

for(int i=x; i<y; i++) {
    cout<<i<<" ";
}
return 0;
}