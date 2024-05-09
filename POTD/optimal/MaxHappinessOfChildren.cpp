#include<bits/stdc++.h>
using namespace std;

int MaximizeTheHappinessOfSelectedChildren(vector<int>&happiness, int k){

    int answer = 0;
    int count = 0;

    sort(happiness.begin(),happiness.end(),greater<int>());

    for(int i=0;i<k;i++){
        answer += max(happiness[i]-count , 0);
        count++;
    }
    return answer;
}

int main()
{
    int n,a;
    cin>>n;
    vector<int>happiness;
    for(int i=0;i<n;i++){
        cin>>a;
        happiness.push_back(a);
    }
    int k;
    cin>>k;

    int ans = MaximizeTheHappinessOfSelectedChildren(happiness,k);
    cout<<ans;

    return 0;
}