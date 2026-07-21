#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        ll a, b, n;
        cin>>a>>b>>n;

        ll ans=0;
        vector<int> x(n);
        for(ll i=0; i<n; i++){
            ll x; cin>>x;
            ans += min(x, a-1);
        }      
        
        cout<<ans+b<<endl;
    }
    return 0;
}
