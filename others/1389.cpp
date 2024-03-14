// class Solution {
// public:
//     vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
//         vector<int>ans;
//         for(int i=0;i<nums.size();i++){
//             ans.insert(ans.begin()+index[i],nums[i]);
//         }
//         return ans;
//     }
// };


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int>ans (int n,vector<int>&index, vector<int>&array){
    vector<int>answer;
    for(int n;i<n;i++){
        answer.insert(answer.begin()+index[i],array[i]);
    }
    return answer;
}

int main()
{
    int n;
    cin>>n;
    int a;
    vector<int>array;
    vector<int>index;

    for(int i=0;i<n;i++){
        cin>>a;
        array.push_back(a);
    }

    for(int i=0;i<n;i++){
        cin>>a;
        index.push_back(a);
    }

    int ans = vector<int>ans(n,array,index);
    for(int i=0;i<n;i++){
        cout<<ans;
    }

    return 0;
}
