#define ll long long

class Solution {

private:
void Solve(ll i,ll n,vector<ll>& lexoArr){
    if(i > n){
        return;
    }
    lexoArr.push_back(i);

    for(ll x=0;x<=9;x++){
        long long currNum = i*10 + x;
        if(currNum > n){
            return;
        }
        Solve(currNum,n,lexoArr);
    }
}

public:
    ll findKthNumber(ll n, ll k) {
        vector<ll>lexoArr;
        for(ll i=1;i<=9;i++){
            Solve(i,n,lexoArr);
        }
        return lexoArr[k-1];
    }
};