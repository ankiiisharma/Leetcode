#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int smallerthancurrentnumber(vector<int>& arr, int n){
    vector<int>answer;
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                count = count+1;
            }
        }
        answer.push_back(count);
        count=0;
    }
    return answer;
}

int main()
{
    int n;
    cin>>n;

    int a;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }

    int ans = smallerthancurrentnumber(arr, n);
    cout<<ans<<" ";
    return 0;
}