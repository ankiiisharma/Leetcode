#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Answer(int n,int m){

    int num1,num2;
    for(int i=1;i<n;i++){
        if(i%m==0){
            num1=num1+i;
        }
        else{
            num2=num2+i;
        }
    }
    return num2-num1;
}

int main()
{
    int m,n;
    cin>>n>>m;

    int ans = Answer(n,m);
    cout<<ans<<endl;
    
    return 0;
}