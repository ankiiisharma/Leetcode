#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PlusOne(vector<int>& v){
    int x=v.size();

    for(int i=x-1;i>=0;i--){
        if(v[i]==9){
            v[i]=0;
        }
        else{
            v[i]++;
            return v;
        }
    }
    v.insert(v.begin(),1);
    return v;
}
int main()
{
    int n,a;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    PlusOne(v);

    return 0;
}