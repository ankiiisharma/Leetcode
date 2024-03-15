#include<bits/stdc++.h>
using namespace std;

vector<int> ProductOfArrayExceptSelfBrute(int n, vector<int>&nums){
    int check = 1;
    vector<int>answer;
    for(int i=0;i<n;i++){
        int product = 1;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]) continue;
            product *= nums[j];
        }
        answer.push_back(product);
    }
    return answer;
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

    vector<int> ans = ProductOfArrayExceptSelfBrute(n,nums);

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}