#include<bits/stdc++.h>
using namespace std;

string MakeTheStringGreat(string s){
    string answer = "";
    for(char &ch:s){
        if(!answer.empty() && (answer.back()-32 == ch || answer.back()+32 == ch)){
            answer.pop_back();
        }
        else{
            answer.push_back(ch);
        }
    }
    return answer;
}

int main()
{
    string s;
    cin>>s;
 
    string ans = MakeTheStringGreat(s);
    cout<<ans;

    return 0;
}