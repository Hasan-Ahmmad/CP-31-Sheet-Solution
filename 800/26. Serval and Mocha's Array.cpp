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
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        bool flag = false;
        for(int i=0; i<n-1; i++){
            for(int j= i+1; j<n; j++){
                if(__gcd(a[i],a[j])<=2){
                    flag = true;
                    break;
                }
            }
        }

        if(flag) cout<< "Yes"<<endl;
        else cout<< "No"<<endl;
    
    }
    return 0;
}
