#include <iostream>
using namespace std;

int solve(int n, string& A, string& B) {
    int scoreA = 0, scoreB = 0;

    for (int i = 0; i < n; ++i) {
        if(A[i]=='R'){
            if(B[i]=='P'){scoreB++;}
            else if(B[i]=='S'){scoreA++;}
            else if(B[i]=='R'){continue;}
        }
        else if(A[i]=='P'){
            if(B[i]=='R'){scoreA++;}
            else if(B[i]=='S'){scoreB++;}
            else if(B[i]=='P'){continue;}
        }
        else{
            if(B[i]=='R'){scoreB++;}
            else if(B[i]=='P'){scoreA++;}
            else if(B[i]=='S'){continue;}
        }
    }
    if(scoreA>scoreB)   return 0;
    if(scoreA == scoreB)    return 1;
    return scoreB-scoreA;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string A, B;
        cin >> A >> B;

        cout << solve(n, A, B) << endl;
    }

    return 0;
}
