#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        ll a,b; cin>>a>>b;

        if(a==b){
            cout<< 0 <<" "<<0<<endl;
        }
        else{
            ll ans1 = abs(a-b);
            ll ans2 = min(a%ans1, ans1-a%ans1);

            cout<< ans1 <<" "<<ans2<<endl;
        }
    
    }
    return 0;
}
