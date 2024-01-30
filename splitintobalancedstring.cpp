#include <bits/stdc++.h>
using namespace std;
int balancedStringSplit(string s) {
    int balance = 0 , splits = 0;
    for(char &c : s) {
        balance += (c == 'L' ? -1 : 1);
        if(balance == 0)
            splits++;
    }
    return splits;
}
int main() {
    string s = "RLRRLLRLRL";
    cout << balancedStringSplit(s) << endl;
    return 0;
}