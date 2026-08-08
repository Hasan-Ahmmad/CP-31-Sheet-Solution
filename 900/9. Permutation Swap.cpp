#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        vector<int> v(n+1);
        int ans = 0;

        for(int i=1; i<=n; i++){
            cin>>v[i];

            ans = gcd(ans, abs(i-v[i]));
        }

        cout<< ans <<endl;
    
    }
    return 0;
}
