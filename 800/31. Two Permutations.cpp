#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n, a, b;
        cin>>n>>a>>b;

        if(a+b+2<=n || (a== n && b==n)){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    
    }
    return 0;
}
