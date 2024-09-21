#include<bits/stdc++.h>
using namespace std;


int maxDistance(vector<vector<int>>& arrays){

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(const auto& array:arrays){
        if(array[0]<mini){
            mini = array[0];
        }
    }

    for(const auto& array:arrays){
        int n = array.size() - 1;
        if(array[n]>maxi){
            maxi = array[n];
        }
    }

    return maxi - mini;
}

int main()
{
    int m;
    cin>>m;

    vector<vector<int>>arrays;
    for(int i=0;i<m;i++){
        vector<int>nums;
        int n,e;
        cout<<"enter the length of array no.: "<<i+1<<endl;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>e;
            nums.push_back(e);
        }
        arrays.push_back(nums);
    }

    int ans = maxDistance(arrays);
    cout<<ans;

    return 0;
}