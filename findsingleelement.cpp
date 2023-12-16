#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int FindSingleElement(vector<int>& array, int n){
    int singleElement;
    map<int,int>ans;
    for(int i=0;i<n;i++){
        ans[array[i]]++;
    }

    for(auto i : ans){
        if(i.second == 1){
            singleElement = i.first;
        }
    }

    return singleElement;
}

int main()
{
    int n,a;
    cin>>n;

    vector<int>array;
    for(int i=0;i<n;i++){
        cin>>a;
        array.push_back(a);
    }
    
    int ans = FindSingleElement(array,n);
    cout<<ans<<endl;
    return 0;
}