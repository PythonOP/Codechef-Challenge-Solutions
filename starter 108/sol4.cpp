#include <iostream>
using namespace std;

int main(){
    long long int r1,r2;
    cin>>r1>>r2;
    
    long long int d1,d2;
    cin>>d1>>d2;
    
    long int x1=d1+r1;
    long int x2=d2+r2;
    
    if(x1>x2){
        cout<<"Dominater";
    }
    else{
        cout<<"Everule";
    }
}
