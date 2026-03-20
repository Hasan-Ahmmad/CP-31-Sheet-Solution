#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        long long n; cin>>n;

        int ans=0;

        for(long long i=1; i<=n; i=i*10 +1){
            for(int j=1; j<=9; j++){
                if(i*j<=n){
                    ans++;
                }
            }
        }

        cout<<ans<<endl;
    
    }
    return 0;
}
