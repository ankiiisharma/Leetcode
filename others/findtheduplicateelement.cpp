#include<bits/stdc++.h>
using namespace std;

int FindDuplicates(int n, int array[]){
    map<int,int>ans;
    int answer;
    for(int i=0;i<n;i++){
        ans[array[i]]++;
    }

    map<int,int> :: iterator it;
    for(it=ans.begin();it!=ans.end();it++){
        if((*it).second >= 2){
            answer = (*it).first;
        }
    }
    return answer;
}

int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int ans = FindDuplicates(n,array);
    cout<<ans<<endl;
    return 0;
}