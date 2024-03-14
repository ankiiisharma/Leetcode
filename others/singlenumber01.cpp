#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SingleNumber(vector<int>& nums){
    int ans = 0;

    for(int i=0;i<nums.size();i++){
        ans^=nums[i];
    }

    return ans;

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

    int answer = SingleNumber(nums);
    cout<<answer<<" ";
    return 0;
}