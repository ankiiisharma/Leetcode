#include<bits/stdc++.h>
using namespace std;

bool UniqueOccurance(int n, int arr[]){
    map<int,int>arrMap;
    for(int i=0;i<n;i++){
        arrMap[arr[i]]++;
    }

    map<int,int>countOccuranceMap;
    for(auto it = arrMap.begin(); it!= arrMap.end(); it++){
        if(countOccuranceMap.find(it->second) != countOccuranceMap.end()){
            return false;
        }
        else{
            countOccuranceMap[it->second] = 1;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool ans = UniqueOccurance(n,arr);
    cout<<ans;
    return 0;
}