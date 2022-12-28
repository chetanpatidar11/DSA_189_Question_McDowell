#include<bits/stdc++.h>
using namespace std;
string tolower(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' and s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
        }
    }
    return s;
}
string ispermutation(string s){
    int hash[256]={0};
    for(auto i:s){
        hash[i-'a']++;
    }
    bool isfirst=true;
    for(int i=0;i<256;i++){
        if(hash[i]%2==1){
            if(isfirst){
                isfirst=false;
            }
            else{
                return "false";
            }
        }
    }
    return "true";
}
int main(){
    string s="Tact Coa";
    s=tolower(s);
    cout<<ispermutation(s);

}