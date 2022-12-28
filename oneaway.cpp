#include<bits/stdc++.h>
using namespace std;
bool oneaway(string s,string p){
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    for(int i=0;i<p.size();i++){
        hash[p[i]]--;
    }
    int count=0;
    for(auto i:hash){
        count+=abs(i);

    }
    if(count>2) return false;
    else if (count==2 and s.size()==p.size()) return true;
    else  if (count==1) return true;
    else return false;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(oneaway(s1,s2))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}