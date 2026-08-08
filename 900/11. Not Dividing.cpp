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
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        for(int i=0; i<n-1; i++){
            if(v[i] == 1){
                v[i] +=1;
            }
            if(v[i+1]>=v[i] && v[i+1]%v[i] == 0){
                v[i+1] +=1;
            }
        }

        for(int i : v){
            cout<< i<< " ";
        }
        cout<< endl;
    
    }
    return 0;
}
