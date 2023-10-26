#include<bits/stdc++.h>
using namespace std;

string solve(int n, vector<int> cnds) {
    int total = 0;
    for(auto it: cnds) {
        total += it;
    }
    if(total%n!=0){
        return "No";
    }
    else{
        total = 0;
        for(int i=0;i<n;i++){
            cnds[i] = cnds[i]/2;
            total += cnds[i];
        }
        if(total%n==0){
            return "Yes";
        }
        else{
            return "No";
        }
    }
}

int main() {
    int t, n;
    cin >> t;
    for(; t != 0; t--) {
        cin >> n;
        vector<int> cnds(n);
        for(int i = 0; i < n; i++) {
            cin >> cnds[i];
        }
        cout << solve(n, cnds) << endl;
    }
}
