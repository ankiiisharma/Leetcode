



class Solution {

public:

   long long SumsOfNums(vector<int>&nums){
        long long total = 0;
        for(int i=0;i<nums.size();i++){
            total += nums[i];
        }
        return total;
    }

    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long total = SumsOfNums(nums); 
        for(int i=n-1;i>=2;i--){
            if((total - nums[i])>nums[i]){
                return total;
            }
            total -= nums[i];
        }
        return -1;
    }
};