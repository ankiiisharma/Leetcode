#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
// Return the array in the form [x1,y1,x2,y2,...,xn,yn].

int sufflethearray(vector<int>& nums, int n){
    int i=0;
    int j=n;
    vector<int>answer;
    while(i<n && j<2*n){
        int x = nums[i];
        int y = nums[j];

        answer.push_back(x);
        answer.push_back(y);
        i++;
        j++;
    }

    return answer;
}

int main()
{
    int n,a;
    cin>>n;

    vector<int>nums;
    for(int i=0;i<2*n;i++){
        cin>>a;
        nums.push_back(a);
    }
    sufflethearray(nums, n);

    // for(auto it : nums){
    //     cout<<nums[it]<<" ";
    // }

    return 0;
}