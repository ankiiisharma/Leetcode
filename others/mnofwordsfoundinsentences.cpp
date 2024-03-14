#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maximumnumberofwordsinSentences(string sentences){
    int maxWords = 0;

    for(string &sentence : sentences){
        int words = 1;
        for(char &currentchar : sentence){
            if(currentchar == ' '){
                words += 1;
            }
        }
        maxWords = max(maxWords, words);
    }

  return maxWords;
}

int main()
{
    string sentences;
    cin>>sentences;

    int ans = maximumnumberofwordsinSentences(sentences);
    cout<<ans<<" ";
    
    return 0;
}