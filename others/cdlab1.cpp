#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//First and follow. using CPP . CD 

 void addprod(char *s) {
        int i;
        prod[count_var][0] = s[0];
        for(i=3;s[i]!='\0';i++) {
            if(!IsCap(s[i])) add(ter,s[i]);
            prod[count_var][i-2] = s[i];
        }
        prod[count_var][i-2] = '\0';
        add(nt,s[0]);
        count_var++;
    }

  int main() {
        char s[max],i;
        cout<<"Enter the productions\n";
        cin>>s;
        while(strcmp("end",s)) {
            addprod(s);
            cin>>s;
        }

        findfirst();
        findfollow();

        for(i=0;i<strlen(nt);i++) {
            cout<<nt[i]<<"\t";
            cout<<first[i];
            if(eps[i]==1) cout<<((char)238)<<"\t";
            else cout<<"\t";
            cout<<follow[i]<<"\n";
        }
        return 0;;
    }