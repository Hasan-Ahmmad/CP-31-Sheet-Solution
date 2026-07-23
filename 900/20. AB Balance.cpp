#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        string s;
        cin>>s;

        if(s[0] == s[s.length()-1]){
            cout<<s<<endl;
        }
        else{
            if(s[0] == 'a'){
                s[0] = 'b';
            }
            else s[0] = 'a';
            cout<< s <<endl;
        }
    
    }
    return 0;
}
