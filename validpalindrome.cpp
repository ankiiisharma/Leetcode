#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool Validpalindrome(string s){
    int i = 0;
    int j = s.length();
    while(i<j){
        if(!isalnum(s[i])){
            i++;
        }
        else if(!isalnum(s[j])){
            j--;
        }
        else if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    bool ans = Validpalindrome(s);
    cout<<ans<<endl;
    return 0;
}