class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>mp1;
        // map<string,int>mp2;

        stringstream ss1(s1);
        string token = "";
        while(ss1>>token){
            mp1[token]++;
        }
        stringstream ss2(s2);
        while(ss2>>token){
            mp1[token]++;
        }
        

        vector<string>unCommons;
        for(auto it1=mp1.begin();it1!=mp1.end();it1++){
           if(it1->second == 1){
            unCommons.push_back(it1->first);
           }
        }
        return unCommons;
    }
};