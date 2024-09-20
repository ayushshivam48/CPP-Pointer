#include<iostream>
using namespace std;
int main(){
    int x=23;
    int* p=&x;
     cout<<x<<endl;
    *p=43;
     cout<<x<<endl;
    }