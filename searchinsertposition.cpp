#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
//You must write an algorithm with O(log n) runtime complexity.

int SearchInsertPosition(vector<int>& nums, int target){

    int left =0;
    int right=nums.size();

    int mid=left+(right-left)/2;

    while(left<right){
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            left=mid+1;
        }
        else{
            right = mid;
        }
    }

    return left;
}

int main()
{
    int n,a;
    cin>n;

    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }

    int target;
    cin>>target;

    SearchInsertPosition(nums,target);
     return  0;  
}