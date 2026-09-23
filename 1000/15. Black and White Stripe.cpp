#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        vector<int> freq(n+1, 0);
        for(int i=1; i<=n; i++){
            freq[i] = freq[i-1] + (s[i-1] == 'W');
        }

        int ans = INT_MAX;
        for(int i=0; i<=n-k; i++){
            ans = min(ans,(freq[i+k]-freq[i]));
        }

        cout<< ans <<endl;

    }
    return 0;
}
