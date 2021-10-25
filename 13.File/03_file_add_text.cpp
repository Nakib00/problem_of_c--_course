#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
ofstream x;
string str;
x.open("02_creat_user_input",ios::out | ios::app);

cout<<"User input: ";
getline(cin, str);

x<<" Hello "<<str<<"\t";

x.close();

cout<<"User input complite";

return 0;
}