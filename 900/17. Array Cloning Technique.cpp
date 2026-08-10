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
        vector<int> v(n);
        map<int, int> freq;
        for(int i=0; i<n; i++){
            cin>>v[i];
            freq[v[i]]++;
        }

        int mx = 0;
        for(auto i : freq){
            if(i.second>mx){
                mx = i.second;
            }
        }

        int ans = 0;
        int idx = 0;
        while(mx<n){
            if(mx*2<=n){
                ans += mx;
                mx *=2;
            }
            else{
                ans += (n-mx);
                mx *= 2;
            }
            idx++;
        }

        cout<< ans + idx <<endl;

    
    }
    return 0;
}
