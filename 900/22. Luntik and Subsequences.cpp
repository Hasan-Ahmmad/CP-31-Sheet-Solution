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
    
        int n; cin>>n;

        vector<int> a(n);
        ll cnt1 = 0, cnt2 = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==0){
                cnt1++;
            }
            if(a[i] == 1){
                cnt2++;
            }
        }

        cout<< (ll)(pow(2,cnt1)) * cnt2 <<endl;

    
    }
    return 0;
}
