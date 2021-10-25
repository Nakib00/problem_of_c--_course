#include<iostream>
#include <time.h> 
using namespace std;


int main(){
int x;

srand (time(NULL));

x = (rand()%100);

cout<<x;

return 0;
}