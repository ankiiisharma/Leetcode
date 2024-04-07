#include<bits/stdc++.h>
using namespace std;

string MinmumRemovesToMakeValidString(string s){
    stack<int>st;
    for(int i=0;i<s.size();i++){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
    }
    while(!st.empty()){
        s.erase(st.top(),1);
        st.pop();
    }

    return s;
}


int main()
{
    string s;
    cin>>s;

    string ans = MinmumRemovesToMakeValidString(s);
    cout<<ans;
    return 0;
}