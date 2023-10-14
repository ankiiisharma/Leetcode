#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fvovapo(vector<string>& answer){
    int flag=0;
    for(const string& i : answer){
        if(i=="X++" || i=="++X"){
            flag=flag+1;
        }
        else if(i=="--X" || i=="X--"){
            flag=flag-1;
        }
    }

    return flag;
}

int main()
{
    // int n;
    // cout<<"Enter number of inputs";
    // cin>>n;

    vector<string>answer={"--X","X++","X++"};
    // string s;
    // for(int i=0;i<n;i++){
    //     cin>>s;
    //     answer.push_back(s);
    // }
    int output = fvovapo(answer);
    cout<<output<<endl;

    return 0;
}