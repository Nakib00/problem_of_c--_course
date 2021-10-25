/*sum number using pointer */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int x=10,y=20;
int *p=&x,*k=&y;

cout<<*p<<endl;

*p =20;

cout<<*p<<endl;
cout<<x<<endl;
return 0;
}