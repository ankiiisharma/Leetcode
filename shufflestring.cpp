#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int shuffleString(string s, int n, vector<int>& indicies){

    string answer(n,' ');
    for(int i=0;i<n;i++){
        answer[indicies[i]]=s[i];
    }
return answer;
}

int main()
{
    int n,a;
    cin>>n;
    string s;
    cin>>s;

    vector<int>indicies;
    for(int i=0;i<n;i++){
        cin>>a;
        indicies.push_back(a);
    }
    int ans = shuffleString(s,n,indicies);
    cout<<ans<<endl;

    return 0;
}