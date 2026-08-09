#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        ll n; cin>>n;

        if(n<4 || n%2 ==1){
            cout<< -1 <<endl;
        }
        else{
            cout<< (n+5)/6 << " "<<n/4 <<endl;
        }

    
    }
    return 0;
}
