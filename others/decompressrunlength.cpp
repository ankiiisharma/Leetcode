#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> ans;

    for (int i = 0; i < nums.size(); i += 2)
      ans.insert(ans.end(), nums[i], nums[i + 1]);

    return ans;
  }
};

int main()
{
    int n,a;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
      cin>>a;
      nums.push_back(a);
    }
    Solution Obj;
    Obj.decompressRLElist(nums);
    cout<<Obj.decompressRLElist;
    return 0;
}