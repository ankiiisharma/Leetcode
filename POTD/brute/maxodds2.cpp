#include<bits/stdc++.h>
using namespace std;

string MaxOddwithBinary(string s){
    string answer;
    int CountOne = 0;
    int CountZero = 0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            CountOne++;
        }
        else if(s[i]=='0'){
        CountZero++;
        }
    }

    answer = string(CountOne - 1, '1') +  string(CountZero, '0') + '1';
    return answer;
}

int main()
{
    string s;
    cin>>s;

    string ans = MaxOddwithBinary(s);
    cout<<ans;
    return 0;
}