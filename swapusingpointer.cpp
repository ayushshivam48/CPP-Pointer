#include<iostream>
using namespace std;
void swap(int *a, int *b){
      int temp=*a;
           *a=*b;
           *b= temp;
}
int main(){
    int x,y;
    cout<<"value of x: "<<endl;
    cin>>x;
    cout<<"value of y: "<<endl;
    cin>>y;
      swap(&x,&y);
    cout<<"swapped value of x: "<<x<<endl;
    cout<<"swapped value of y: "<<y<<endl;
}