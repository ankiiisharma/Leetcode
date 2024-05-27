class Solution {
public:
    int specialArray(vector<int>& nums) {
         for(int i=0;i<=nums.size();i++){
            int cn = i;
            int count = 0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]>=cn){
                    count++;
                }
            }
            if(cn==count){
                return cn;
            }
         }
         return -1;
    }
};