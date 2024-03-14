// *****
// *   *
// *   *
// *   *
// *****

void fullRow(int n){
    string s = "";
    for(int i=0;i<n;i++){
        s.append("*");
    }
    cout<<s<<endl;
}

void fullpattern(int n){
    fullRow(int n);
}


int main(){
    int n;
    cin>>n;
    fullpattern(n);
}
