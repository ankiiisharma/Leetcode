#include<iostream>
using namespace std;

void RightAngleFibo(int n){
    int a=0;
    int b=1;

    for(int i=1;i<=n;i++){
        int temp = a;
        for(int j=1;j<=i;j++){
            cout<<temp<<" ";
            int sum = a + b;
            a = b;
            b = sum;
            temp = sum;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    RightAngleFibo(n);
    return 0;
}