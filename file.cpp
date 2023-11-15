
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int T;
//     cin >> T;

//     for (int t = 0; t < T; t++) {
//         int n;
//         cin>>n;
//         if(n<=4){
//             cout<<0<<" "<<n<<endl;
//         }
//         else{
//             cout<<1<<" "<<(n-1)<<endl;
//         }
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    string s;
	    
	    cin>>s;
	    int si=0,b=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='?')   si++;
	        else{b=b+(s[i]-'0');
	    }}
	    if(s[0]=='?'){
	        cout<<1;
	        si--;
	        while(si--){
	            cout<<0;
	            
	        }
	        cout<<endl;
	    }
        else{
            if(si>0){
                b=b%9;
                if(b==0){
                    si--;
                    while(si--) cout<<1;
                    cout<<2<<endl;
                }
                else{
                    while(si--) cout<<1;
                    cout<<endl;
                }
            }
            else{
                if(b%9) cout<<0<<endl;
                else    cout<<1<<endl;
            }
        }
    }
}