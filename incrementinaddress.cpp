#include<iostream>
using namespace std;
int main(){
    int x=20;
    double d=9.8;
    float f=3.14;
    int *ptr=&x;
    double *ptrd=&d;
    float *ptrf=&f;

    cout<<"Size of x: "<<sizeof(x)<<endl;
    cout<<"Size of d: "<<sizeof(d)<<endl;
    cout<<"Size of f: "<<sizeof(f)<<endl;

    cout<<ptr<<" "<<(ptr+1)<<endl;
    cout<<ptrd<<" "<<(ptrd+1)<<endl;
    cout<<ptrf<<" "<<(ptrf+1)<<endl;
}