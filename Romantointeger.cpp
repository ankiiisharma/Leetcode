#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int RomanToInteger(string s){
    map<char,int>m = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int integer = 0;
    for(int i=0;i<s.length();i++){
        if(m[s[i+1]]<=m[s[i]]){
            integer += m[s[i]];
        }
        else{
            integer -= m[s[i]];
        }
        
    return integer;
    }
}

int main()
{
    string s;
    cin>>s;
    
    int ans=RomanToInteger(s);
    cout<<ans<<endl;
    return 0;
}