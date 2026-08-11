#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        string s; cin>>s;

        int cnt1=0, cnt2=0, ans=0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '0'){
                cnt1++;
            }
            else cnt2++;
        }

        for(int i=0; i<s.size(); i++){
            if(s[i] == '0' && cnt2>0){
                cnt2--;
                ans++;
            }
            else if(s[i] == '1'&& cnt1>0){
                cnt1--;
                ans++;
            }
            else break;
        }

        cout<< s.size()-ans <<endl;
    
    }
    return 0;
}
