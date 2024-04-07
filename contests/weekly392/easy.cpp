//  Longest Strictly Increasing or Strictly Decreasing Subarray


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int LongestStrictlyIncreasingOrDecreasingSubarray(vector<int>&nums){
        int maxLength = 1;
        int incLength = 1;
        int decLength = 1;

        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
                incLength++;
                decLength = 1;
            }
            else if(nums[i] < nums[i+1]){
                decLength++;
                incLength = 1;
            }
            else{
                incLength = 1;
                decLength = 1;
            }
           maxLength =  max(maxLength, max(incLength,decLength));
        }
        return maxLength;
    }
};


int main()
{
    vector<int>nums = {3,3,3,3};

    Solution obj;
    int answer = obj.LongestStrictlyIncreasingOrDecreasingSubarray(nums);
    cout<<answer<<endl;
    return 0;
}