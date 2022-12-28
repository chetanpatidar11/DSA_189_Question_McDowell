#include<bits/stdc++.h>
using namespace std;
bool checkPermutation(string s,string p){
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
    return (s==p);
}
int main(){
    string s,p;
    cin>>s>>p;
    if(checkPermutation(s,p)){
        cout<<"Permuation strings"<<endl;
    }
    else {
        cout<<"no permutation"<<endl;
    }
}       