#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int _ = 0; _ < t; ++_) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int c = 0;
        bool f = true;

        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '0') {
                c += 1;
            } else {
                c -= 1;
            }

            if (c < -1 || c > 1) {
                f = false;
                cout << "NO" << endl;
                break;
            }
        }

        if (f) {
            cout << "YES" << endl;
        }
    }

    return 0;
}
