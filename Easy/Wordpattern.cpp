#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string pattern;
    cin>>pattern>>s;

    bool ans = WordPattern(pattern,s);
    cout<<ans;
    return 0;
}