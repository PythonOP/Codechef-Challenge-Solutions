#include<bits/stdc++.h>
using namespace std;
int solve(int n,int m,int x,int y){    
    return ((n*x)+(m*y));
}
int main(){
    int n,m,x,y;
    cin>>n>>m;
    cin>>x>>y;
    cout<<solve(n,m,x,y);
}