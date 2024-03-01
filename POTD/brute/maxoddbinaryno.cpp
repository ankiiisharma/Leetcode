// You are given a binary string s that contains at least one '1'.

// You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.

// Return a string representing the maximum odd binary number that can be created from the given combination.

// Note that the resulting string can have leading zeros

// exp : q- 010  ans - 001

#include<bits/stdc++.h>
using namespace std;


string maxOddBinaryNumbers(string s){
    
    sort(s.rbegin(),s.rend()); //100
    for(int i = s.size()-1;i>=0;i--){
        if(s[i]=='1')  swap(s[i],s[s.size()-1]);
    }
    return s;

}

int main()
{

    string s;
    cin>>s;

    string ans = maxOddBinaryNumbers(s);
    cout<<ans;

    return 0;
}