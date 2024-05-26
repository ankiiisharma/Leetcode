class Solution {

private:
      vector<string>result;
     void solve(int i, string currSentence, string s,unordered_set<string>&st,vector<string>&result){
        if(i>=s.length()){
            result.push_back(currSentence);
            return;
        }

        for(int j=i;j<s.length();j++){
            string word = s.substr(i,j-i+1);
            if(st.count(word)){
                string tempSentence = currSentence;
                if(!currSentence.empty()){
                    currSentence +=" ";
                }
                currSentence += word;
                solve(j+1,currSentence,s,st,result);
                currSentence = tempSentence;
            }
        }
    }

public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string> st(wordDict.begin(), wordDict.end());


        string currSentence ="";
        solve(0,currSentence,s,st,result);
        return result;
    }
};