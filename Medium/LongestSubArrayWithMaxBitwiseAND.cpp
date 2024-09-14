class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int maxi = 0;
        int maxCount = 0;
        int count = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi = nums[i];
                maxCount = 0;
                count = 0;
            }
        
        if(maxi == nums[i]){
            count++;
        }else{
            count = 0;
        }

        maxCount = max(count,maxCount);
        }

       
     
    return maxCount;
    }
};
