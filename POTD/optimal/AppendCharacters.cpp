#include<bits/stdc++.h>
using namespace std;

int AppendCharacter(string s, string t){
    int i = 0;
    int j = 0;
    while(i<s.length() && j<t.length()){
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else{
        i++;
        }
    }
    return t.length() - j;
}

int main()
{
    string s,t;
    cin>>s>>t;

    int ans = AppendCharacter(s,t);
    cout<<ans;
    return 0;
}