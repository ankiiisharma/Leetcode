class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;

        for(auto interval : intervals){
            if(ans.empty() || interval[0] > ans.back()[1]){
                ans.push_back(interval);
            }
            else{
                vector<int>& prevInterval = ans.back();
                prevInterval[1] = max(prevInterval[1], interval[1]);
            }
        }
        return ans;
    }
};
