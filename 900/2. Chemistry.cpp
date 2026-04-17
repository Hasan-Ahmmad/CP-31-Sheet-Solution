#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n,k; cin>>n>>k;
        string s; cin>>s;

        vector<int> fre(26,0);
        for(int i=0; i<s.size(); i++){
            fre[s[i]-'a']++;
        }

        int oddCount=0;
        for(int i=0; i<26; i++){
            if(fre[i]%2==1) oddCount++;
        }

        if(oddCount-1 > k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    
    }
    return 0;
}
