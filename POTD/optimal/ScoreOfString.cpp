#include<bits/stdc++.h>
using namespace std;


int ScoreOfString(string s){
    // Hello
    // 104 101 108 108 111 
    // 13 - i have too find sum after the differences;
    int n = s.length();
    int sum = 0;
    for(int i=0;i<n-1;i++){
        sum += abs(int(s[i]) - int(s[i+1]));
    }
    return sum;
}

int main()
{
    string s;
    cin>>s;

    int ans = ScoreOfString(s);
    cout<<ans;
    return 0;
}