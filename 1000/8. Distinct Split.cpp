#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long


int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n;
        cin>>n;

        string s;
        cin>>s;


        vector<int> pre(n), suff(n);
        set<int> st;

        for(int i=0; i<n; i++){
            st.insert(s[i]);
            pre[i] = st.size();
        }

        st.clear();
        
        for(int i=n-1; i>=0; i--){
            st.insert(s[i]);
            suff[i] = st.size();
        }

        int ans = 0;
        for(int i=0; i<n-1; i++){
            ans = max(ans, pre[i]+suff[i+1]);
        }

        cout << ans <<endl;
    
    }
    return 0;
}
