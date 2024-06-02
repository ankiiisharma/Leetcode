#include<bits/stdc++.h>
using namespace std;


    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() -1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }

int main()
{
    int n;
    cin>>n;
    vector<char>s;
    char a;
    for(int i=0;i<n;i++){
        cin>>a;
        s.push_back(a);
    }

    reverseString(s);
    for(char &c:s){
        cout<<c;
    }

    return 0;
}