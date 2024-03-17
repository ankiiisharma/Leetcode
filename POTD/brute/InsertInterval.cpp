class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>>testArray;
        for(auto interval : intervals){
            testArray.push_back(interval);
        }
        testArray.push_back(newInterval);

        sort(testArray.begin(),testArray.end());
        vector<vector<int>>ans;
        for(auto currentInterval : testArray){
            if(ans.size()==0 || currentInterval[0] > ans.back()[1] ){
               ans.push_back(currentInterval);
            }
            else{
             vector<int>& previousInterval = ans.back();
             previousInterval[1] = max(previousInterval[1],currentInterval[1]);
            }
        }
    return ans;    
    }
};