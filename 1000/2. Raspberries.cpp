#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n, k; cin>>n>>k;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        
        int ans = INT_MAX;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(v[i]%k == 0){
                ans = 0;
                break;
            }
            if(v[i]%2 == 0){
                cnt++;
            }
            ans = min(ans, k-v[i]%k);
        }

        if(k == 4){
            if(cnt>=2){
                ans = 0;
            }
            else if(cnt == 1){
                ans = min(ans, 1);
            }
            else{
                ans = min(ans,2);
            }
        }

        cout<< ans <<endl;
    
    }
    return 0;
}
