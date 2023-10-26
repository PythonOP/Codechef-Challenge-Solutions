#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
   if(n%2 != 0 ){
        for(int x=0;x<n+1;x++){
            for(int y=0;y<n+1;y++){
               if(((x|y)*(x^y))==n){
                cout<<y<<" "<<x<<endl;
                return;
               }
            }
    }
   }
}

int main() {
    int t, n;
    cin >> t;
    for(; t != 0; t--) {
        cin >> n;
        solve(n);
    }
}


