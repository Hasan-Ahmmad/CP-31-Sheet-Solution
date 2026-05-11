#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        ll n,k,x;
        cin>>n>>k>>x;

        ll sum1=0;
        ll sum2= (k*(k+1))/2;

        while(k--){
            sum1+=n;
            n--;
        }

        if(x>=sum2 && x<=sum1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}
