#include<bits/stdc++.h>
using namespace std;

vector<string> SortThePeople(int n, vector<int>& heights, vector<string>& names){

    vector<pair<int,string>>v;

    for(int i=0;i<n;i++){
        v.push_back({heights[i],names[i]});
    }
    sort(v.rbegin(),v.rend());

    for(int i=0;i<n;i++){
        names[i] = v[i].second;
    }
  return names;
}
int main()
{
    int n;
    cin>>n;

    int h;
    string s;

    vector<string>names;
    vector<int>heights;
    for(int i=0;i<n;i++){
        cout<<"Enter the name of character " + i <<endl; 
        cin>>s;
        names.push_back(s);
        cout<<"Enter the height of " + s <<endl;
        cin>>h;
        heights.push_back(h);
    }

    vector<string>ans  = SortThePeople(n,heights,names);

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}