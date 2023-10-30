class Solution {
private:
    void permuterecur(vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans, vector<int>& freq) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++) { // Fixed the loop condition
            if (!freq[i]) {
                ds.push_back(nums[i]);
                freq[i] = 1;
                permuterecur(ds, nums, ans, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(), 0); // Initialize freq with all zeros
        permuterecur(ds, nums, ans, freq);
        return ans;
    }
};