#include<bits/stdc++.h>
using namespace std;
bool isunique(string s){
    bitset<256> bits(0);
    for(int i=0;i<s.size();i++){
        int val=s[i];
        if(bits.test(val)>0){
            return false;
        }
        bits.set(val);
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    if(isunique(s)) 
        cout<<"Unique String"<<endl;
    else
        cout<<"Not Unique"<<endl;
}