#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
ofstream x;
string str;
x.open("02_creat_user_input");

cout<<"User input: ";
getline(cin, str);

x<<"Hello "<<str;

x.close();

return 0;
}