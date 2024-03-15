#include<bits/stdc++.h>
using namespace std;

bool ValidAnagram(string s, string t){

         if(s.length() != t.length()){
           return false;
        }
        unordered_map<char,int>sMap;
        unordered_map<char,int>tMap;

        for(char c : s){
            sMap[c]++;
        }
        for(char c : t){
            tMap[c]++;
        }

        for(auto it1=sMap.begin();it1!=sMap.end();it1++){
            if(tMap.find(it1->first) == tMap.end() || tMap[it1->first] != it1->second){
                return false;
            }
        }
     return true;
    }

int main()
{
    string s,t;
    cin>>s>>t;

    bool ans =  ValidAnagram(s,t);
    cout<<ans;
    return 0;
}