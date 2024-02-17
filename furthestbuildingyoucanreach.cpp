// You are given an integer array heights representing the heights of buildings, some bricks, and some ladders.

// You start your journey from building 0 and move to the next building by possibly using bricks or ladders.

// While moving from building i to building i+1 (0-indexed),

// If the current building's height is greater than or equal to the next building's height, you do not need a ladder or bricks.
// If the current building's height is less than the next building's height, you can either use one ladder or (h[i+1] - h[i]) bricks.
// Return the furthest building index (0-indexed) you can reach if you use the given ladders and bricks optimally.

#include<bits/stdc++.h>
using namespace std;

int FurthestBuilding(int n,int heights[],int bricks,int ladders){
    priority_queue<int>PQ;
    int i;
    int differ = 0;
    for(i=0;i<n;i++){
        differ = heights[i+1] - heights[i];
        if(differ<=0){
            continue;
        }   bricks = bricks - differ;
            PQ.push(differ);
        
        if(bricks<0){
            bricks = bricks + PQ.top();
            PQ.pop();
            ladders--;
        }
        if(ladders<0){
            break;
        }
    }
    return i;
}

int main()
{
    int n;
    cin>>n;
    int heights[n];
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    int bricks,ladders;
    cin>>bricks>>ladders;

    int ans = FurthestBuilding(n,heights,bricks,ladders);
    cout<<ans<<endl;
    return 0;
}