#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lengthoflastworld(string s){
    int len=0;
    int i=s.length()-1;

    while(i>=0 && s[i]==' '){
        i--; // Altering the space 
    } 

    while(i>=0 && s[i]!=' '){
        len++;
        i--;
    }

    return len;

}

int main()
{
    string s;
    cin>>s;
    
    lengthoflastworld(s);

    cout<<lengthoflastworld<<endl;
    return 0;
}