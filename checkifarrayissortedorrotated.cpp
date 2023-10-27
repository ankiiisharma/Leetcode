#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkifArrayIsSortedOrRotated(vector<int>& nums, int n){
    int rotates = 0;
    for (int i = 0; i < n; ++i)
      if (nums[i] > nums[(i + 1) % n] && ++rotates > 1)
        return false;

    return true;
    }


int main()
{
    int n;
    cin>>n;
    int a;
    vector<int>nums;

    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }

    int ans = checkifArrayIsSortedOrRotated(nums,n);
    cout<<ans<<" ";

    return 0;
}