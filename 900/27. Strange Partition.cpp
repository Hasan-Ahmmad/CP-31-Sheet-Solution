#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define cinn for(int i=0; i<n; i++){ cin>>a[i];}
#define coutt for(int i=0; i<n; i++){ cout<<a[i]<<" ";} cout<<endl;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        ll n, x; cin>>n>>x;

        vector<int> a(n);
        cinn;
 
        ll sum1 = 0, sum2 = 0;
        for(int i=0; i<n; i++){
            sum1 += a[i];
            sum2 += (a[i]+x-1)/x;

        }
        sum1 = (sum1+x-1)/x;

        cout<< min(sum1,sum2)<<" "<< max(sum1,sum2)<<endl;

    
    }
    return 0;
}
