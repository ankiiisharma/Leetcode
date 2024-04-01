#include<bits/stdc++.h>
using namespace std;
int LengthOfLastword(string s){
    // step - 1 : removeing training spaces

    int index = s.find_last_not_of(' ') + 1;
    s.erase(index);

    // step: 2 - finding the fist space after removing traling spaces;
    int last_space_index = s.find_last_of(' ');

    return last_space_index == string::npos ? s.length() : s.length() - last_space_index;
}

int main()
{
    string s;
    cin>>s;

    int ans = LengthOfLastword(s);
    cout<<ans<<"";
    return 0;
}