// Get two valu from the function using the pointer
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void two_valu_return(int *k,int *j){
    *k = *k+3;

    *j = *j+1;
}

int main(){
int x=10,y=20;

two_valu_return(&x,&y);

cout<<x<<" "<<y<<endl;

return 0;
}