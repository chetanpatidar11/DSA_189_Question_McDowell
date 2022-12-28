#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Mr John Smith    ";
    int n=13,i=0;
    while(i<n){
	    if(s[i]==' '){
            s=s.substr(0,i)+"%20"+s.substr(i+1);	
            // continue;
    	       i+=2;	
	    }
	    i++;
   }
    cout<<s<<endl;
}