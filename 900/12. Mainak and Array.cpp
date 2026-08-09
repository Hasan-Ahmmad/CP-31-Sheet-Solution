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

        int diff = v[n-1] - v[0];

        for(int i=n-1; i>0; i--){
            
            diff = max(diff, v[i]-v[0]);
        }   
        
        for(int i=0; i<n-1; i++){
            
            diff = max(diff, v[n-1]-v[i]);
        }   

        for(int i=0; i<n-1; i++){
            
            diff = max(diff, v[i]-v[i+1]);
        }   


        cout<< diff <<endl;
    
    }
    return 0;
}
