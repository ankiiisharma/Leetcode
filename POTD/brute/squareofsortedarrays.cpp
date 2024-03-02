#include<bits/stdc++.h>
using namespace std;

vector<int> SquareOfsortedarrays(int n, int arr[]){
    vector<int>answer;
    for(int i=0;i<n;i++){
        answer.push_back(arr[i]*arr[i]);
    }

    sort(answer.begin(),answer.end());
    return answer;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans = SquareOfsortedarrays(n,arr);

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}