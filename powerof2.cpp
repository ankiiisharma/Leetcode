#include<bits/stdc++.h>
using namespace std;

bool PowerOfTwo(int n){
    if(n<=0){
        return false;
    }
    return ((n&(n-1))==0);
}

int main()
{
    int n;
    cin>>n;

    bool ans = PowerOfTwo(n);
    cout<<ans<<endl;
    return 0;
}