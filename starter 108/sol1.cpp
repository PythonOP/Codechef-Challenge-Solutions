#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N, X;
        cin >> N >> X;
        int mini = (2*N)-X;
        if((X-mini)>0){cout<<(X-mini)<<endl;}
        else{cout<<0<<endl;
    }

    return 0;
}}