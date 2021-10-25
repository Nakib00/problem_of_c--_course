/*Declare a pointer to pointer, that will store the address of a another pointer*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int x=10;
int *p=&x;

int **k=&p;

cout<<p<<endl;
cout<<&p<<endl;
cout<<k<<endl;

**k=30;
cout<<x<<endl;
cout<<*p<<endl;
cout<<**k<<endl;

return 0;
}