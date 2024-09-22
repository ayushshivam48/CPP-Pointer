#include<iostream>
using namespace std;
void findFirstandLastIndex(string s, char ch, int *first, int *last ){
    for (int i=0;i<s.size();i++){
        if(s[i]==ch){
            *first=i;
            break;
        }
    }
    for (int i=s.size()-1;i>=0;i--){
        if(s[i]==ch){
            *last=i;
            break;
        }
    }   
}
int main(){
    string s="aaabac";
    char ch='a';
    int first=-1;
    int last=-1;

    int *pf=&first;
    int *pl=&last;

    findFirstandLastIndex(s,ch,pf,pl);

    cout<<*pf<<" "<<*pl<<"\n";
    cout<<first<<" "<<last<<"\n";

}