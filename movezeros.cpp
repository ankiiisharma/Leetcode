#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

      for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
        //0 1 5 0 7

    // for(int i=1;i<n;i++){
    // cin>>arr[i];
    // }

    return 0;
}