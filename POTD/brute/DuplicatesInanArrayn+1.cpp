#include<bits/stdc++.h>
using namespace std;


int DuplicatesInAnArrayBrute(int n, vector<int>&nums){
      map<int,int>numsMap;
        for(int i=0;i<nums.size();i++){
            numsMap[nums[i]]++;
        }

        for(auto it=numsMap.begin();it!=numsMap.end();it++){
            if(it->second >= 2){
                return it->first;
            }
        }
      return -1;
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

    int ans = DuplicatesInAnArrayBrute(n,nums);
    cout<<ans;
    return 0;
}