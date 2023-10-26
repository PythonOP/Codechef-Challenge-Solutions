#include<bits/stdc++.h>
using namespace std;

string solve(int n, vector<int> cnds) {
    if(all_of(cnds.begin() + 1, cnds.end(), [&](int x) { return x == cnds[0]; })){
        return "Yes";
    }
    if(cnds.size()==1){
        return "Yes";
    }
    double total = 0;
    for(auto it: cnds) {
        total += it;
    }
    double ele=total/n;
    if((int)total%2==0 && (int)ele%2 == 0)
        return "Yes";
    return "No";
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
