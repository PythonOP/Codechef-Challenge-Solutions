#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int n;
        cin>>n;
        if(n<=4){
            cout<<0<<" "<<n<<endl;
        }
        else{
            cout<<1<<" "<<(n-1)<<endl;
        }
    }

    return 0;
}