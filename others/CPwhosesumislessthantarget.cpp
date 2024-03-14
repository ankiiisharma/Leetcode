#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pairwhosesumislessthantarget(vector<int>& nums, int n, int target){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]<target){
                count=count+1;
            }
        }
    }
    return count;
}

int main()
{
    int n,a;
    cin>>n;

    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    int target;
    cin>>target;

    int ans = pairwhosesumislessthantarget(nums,n,target);
    cout<<ans<<" ";
    return 0;
}