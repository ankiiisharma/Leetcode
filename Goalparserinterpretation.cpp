#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string globalparserinterpretation(string command){
    int n = command.size();
    string answer;
    for(char i=0;i<n;i++){
        if(command[i]=='G'){
            answer.append("G");
        }
        else if(command[i]=='(' && command[i+1]==')'){
            answer.append("o");
        }
        else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
            answer.append("al");
        }
    }
    return answer;
}

int main()
{
    string command;
    cin>>command;
    
    string ans = globalparserinterpretation(command);
    cout<<ans<<endl;
    return 0;
}