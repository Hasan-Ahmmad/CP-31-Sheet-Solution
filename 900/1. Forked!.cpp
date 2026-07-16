#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int a,b;
        cin>>a>>b;

        int k1,k2;
        cin>>k1>>k2;
        
        int q1,q2;
        cin>>q1>>q2;

        int a1[4]={1,-1,-1,1};
        int a2[4]={1,1,-1,-1};

        set<pair<int,int>> st1, st2;

        for(int i=0; i<4; i++){
            st1.insert({k1+a1[i]*a, k2+ a2[i]*b});
            st1.insert({k1+a1[i]*b, k2+ a2[i]*a});

            st2.insert({q1+a1[i]*a, q2+ a2[i]*b});
            st2.insert({q1+a1[i]*b, q2+ a2[i]*a});
        }

        int ans=0;
        for(auto i : st1){
            if(st2.find(i) != st2.end()){
                ans++;
            }
        }

        cout<<ans<<endl;
    
    }
    return 0;
}
