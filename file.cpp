#include<bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> cnds) {
    int max = *max_element(cnds.begin(),cnds.end());
    int min = *min_element(cnds.begin(),cnds.end());
    cout<<(max-min);
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
        solve(n, cnds);
    }
}
