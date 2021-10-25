#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class student{
public:
    string name;
    int id;
    float cgpa;
    string subject;
};

int main(){

    student st;

    st.name = "Rakib";
    st.id =2056;
    st.cgpa =3.6;
    st.subject = "BBA";

cout<<"Student name:"<<st.name<<endl;
cout<<"Student id:"<<st.id<<endl;
cout<<"Student cgpa:"<<st.cgpa<<endl;
cout<<"Student subject:"<<st.subject<<endl;

return 0;
}