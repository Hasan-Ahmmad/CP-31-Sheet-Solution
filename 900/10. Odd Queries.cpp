#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){ 
    
        ll n,q;
        cin>>n>>q;

        vector<ll> a(n);
        ll sum = 0;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }

        vector<ll> b(n+1,0);
        for(int ii=1;ii<=n;ii++){
            b[ii]=a[ii-1]+b[ii-1];
        }

        for(ll i=0; i<q; i++){
            ll l,r,k;
            cin>>l>>r>>k;

            ll newSum = (sum - (b[r]-b[l-1])) + (r-l+1)*k;

            if(newSum%2 ==1){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
            
        }
    
    }
    return 0;
}
