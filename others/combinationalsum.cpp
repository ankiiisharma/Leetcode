// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {

//     return 0;
// }

class Solution {
public:
void combination(int index, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& data){
    if(index == arr.size()){
        if(target==0){
            ans.push_back(data);
        }
        return;
    }
    if(arr[index] <= target){
        data.push_back(arr[index]);
        combination(index,target - arr[index], arr, ans, data);
        data.pop_back();
    }

    combination (index+1, target, arr, ans, data);
}

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>data;
        combination(0,target,candidates,ans,data);

        return ans;
    }
};