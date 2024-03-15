#include<bits/stdc++.h>
using namespace std;

vector<int> ProductOfArrayExceptSelfOptimal(int n, vector<int>&nums){
    vector<int>PrefixMul(n,1);
    vector<int>SuffixMul(n,1);

    for(int i=1;i<n;i++){
        PrefixMul[i] = PrefixMul[i-1] * nums[i-1];
    }

    for(int j=n-2;j>=0;j--){
        SuffixMul[j] = SuffixMul[j+1] * nums[j+1];
    }

    vector<int>answer(n);
    for(int i=0;i<n;i++){
        answer[i] = PrefixMul[i]*SuffixMul[i];
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

    vector<int> ans = ProductOfArrayExceptSelfOptimal(n,nums);

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}