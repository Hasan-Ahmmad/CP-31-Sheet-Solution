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
        for(int &i : a){
            cin>>i;
        }

        int ans = 0;
        for(int i= n-2; i>=0; i--){

            while(a[i]>=a[i+1]){
                a[i] /= 2;
                ans++; 
                
                if(a[i] == 0){
                    break;
                }
            }

            if(a[i] == 0 && a[i+1] ==0){
                ans = -1;
                break;
            }

        }
        
        cout<< ans <<endl;
        
    }
    return 0;
}
