#include<bits/stdc++.h>
using namespace std;

int minSwaps(string s){
    int count = 0;
    for(char &ch:s){
        if(ch == '['){
            count++;
        }
        else if(count > 0){
            count--;
        }
    }
    return (count+1)/2;
}

int main()
{
    string s;
    cin>>s;
    cout<<minSwaps(s)<<endl;

    return 0;
}