/*Array using pointer*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int x[4]={10,20,30,40};
int *p[4];

for(int i=0; i<4; i++){
    p[i]=&x[i];
}

for(int i=0; i<4; i++){
    cout<<*p[i]<<" "<<endl;
}

return 0;
}