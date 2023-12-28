#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> FirstAndlastOccurance(int N,int array[],int target){
    // 
    class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1); // Initialize the result vector with two elements, both set to -1.

        // Search for the first occurrence of the target value.
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                ans[0] = mid;
                right = mid - 1; // Continue searching in the left half for the first occurrence.
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Search for the last occurrence of the target value.
        left = 0;
        right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                ans[1] = mid;
                left = mid + 1; // Continue searching in the right half for the last occurrence.
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};

}


int main()
{
    int N;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int target;
    cin>>target;

    vector<int>ans = FirstAndlastOccurance(N,array,target);



    return 0;
}