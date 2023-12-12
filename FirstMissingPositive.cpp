#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int FirstMissingElement(int arr[],int n){
    int rn = 1;
    for(int i=0;i<n;i++){
        if(arr[i]==rn){
            rn++;
        }
    }
    return rn;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = FirstMissingElement(arr,n);
    cout<<ans<<endl;
    return 0;
}