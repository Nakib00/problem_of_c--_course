#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct shop
{
    string name;
    int number;
    int p_id;
    float value;
};


int main(){

struct shop oil;

oil.name = "Rupchada";
oil.number = 20;
oil.p_id = 20221;
oil.value = 5.5;

cout<<"Name of product: "<<oil.name<<endl;
cout<<"Number of products: "<<oil.number<<endl;
cout<<"products id: "<<oil.p_id<<endl;
cout<<"value: "<<oil.value;

return 0;
}