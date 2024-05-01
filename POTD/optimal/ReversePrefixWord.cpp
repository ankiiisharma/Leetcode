#include<bits/stdc++.h>
using namespace std;

string ReversePrefixWord(string word, char ch){
    int j = word.find(ch);

    reverse(word.begin(),word.begin()+j+1);
    return word;

}

int main()
{
    string word;
    cin>>word;

    char ch;
    cin>>ch;

    string ans = ReversePrefixWord(word,ch);

    cout<<ans;

    return 0;
}