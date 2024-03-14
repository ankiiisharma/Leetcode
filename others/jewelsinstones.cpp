#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int jewelsinstones(string jewels, string stones) {
        int count = 0;
        for(int i=0;i<jewels.size();i++){
            for(int j=0;j<stones.size();j++){
                if(jewels[i]==stones[j]){
                    count = count + 1;
                }
            }
        }
        return count;
    }


int main()
{
    string jewels,stones;
    cin>>jewels>>stones;

    int ans = jewelsinstones(jewels,stones);
    cout<<ans<<" ";
    return 0;
}