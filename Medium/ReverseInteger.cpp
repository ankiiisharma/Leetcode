#include<bits/stdc++.h>
using namespace std;

int ReverseInteger(int n){
    int digit;
    int ans = 0;

    while(n!=0){
        digit = n%10;
        if((ans > INT_MAX/10) || (ans<INT_MIN/10)){
            return 0;
        }
        ans = (ans*10)+digit;
        n=n/10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int ans = ReverseInteger(n);
    cout<<ans;
    return 0;
}