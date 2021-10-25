#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
string str;

ifstream x("01_creat");

while(getline(x, str)){
    cout<<str<<endl;
}

x.close();

return 0;
}