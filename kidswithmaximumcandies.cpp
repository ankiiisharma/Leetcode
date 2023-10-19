#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kidswithmaximumcandies(vector<int>& Candies, int extraCandies, int n){
    vector<bool>result;
    int max=0;
    int 

    for(int i=0;i<n;i++){
        max = max(Candies[i],max);
    }

    for(i=0;i<n;i++){
    
    }
  return result;
}
  int n = candies.size() , maxCandies = 0;
    for(int i = 0 ; i < n ; i++)
        if(candies[i] > maxCandies)
            maxCandies = candies[i];
    vector <bool> result(n);
    for(int i = 0 ; i < n ; i++)
    {
        result[i] = (candies[i] + extraCandies >= maxCandies);
    }
    return result;

int main()
{
    int n,a;
    cin>>n;
    vector<int>Candies;
    for(int i=0;i<n;i++){
        cin>>a;
        Candies.push_back(a);
    }

    int extraCandies;
    cin>>extraCandies;
    
    kidswithmaximumcandies(Candies,extraCandies);
    
    return 0;
}