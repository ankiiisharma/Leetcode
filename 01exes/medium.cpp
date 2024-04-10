#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  int MakeMedianEqualToK(vector<int>&nums, int k){
    int totalOperations = 0;
    int n = nums.size();
    sort(nums.begin(),nums.end()); // 1 2 3 4 5 6
    int median = nums[n/2];

    for(int i=0;i<n;i++){
        if(median < k){
            
        }
    }

  }  
};

int main()
{
    vector<int>nums = {1,2,3,4,5,6};
    int k = 4;

    Solution obj;
    int ans = MakeMedianEqualToK(nums,k);
    cout<<ans<<endl;
    return 0;
}