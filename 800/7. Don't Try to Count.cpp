#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n,m; 
        cin>>n>>m;

        string x,s; 
        cin>>x>>s;

        int ans=0;

        while(ans<=6){

            if(x.find(s) != string::npos){
                cout<<ans<<endl;
                break;
            }
            x+=x;
            ans++;
        }

        if(ans>6) cout<<-1<<endl;
    
    }
    return 0;
}
