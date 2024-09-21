class Solution {
private:
    void Solve(int i, int range, vector<int>& ans){
        if(i>range){
            return;
        }
        ans.push_back(i);

        for(int x=0;x<=9;x++){
            int newNum = i*10 + x;
            if(newNum > range){
                return;
            }
            Solve(newNum,range,ans);
        }
    }
public:
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        
        for(int i=1;i<=9;i++){
            Solve(i,n,ans);
        }

        return ans;
    }
};
