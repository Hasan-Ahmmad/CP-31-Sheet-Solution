#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        string n;
        cin>>n;

        string val[] = {"00","25","50","75"};

        int ans = __INT_MAX__;
        for(int i=0; i<4; i++){
          
            int cnt = 0;
            int k=n.size()-1;
          
            for(int j=1; j>=0; j--){
              
                while(k>=0 && val[i][j] !=n[k]){
                    cnt++;
                    k--;
                }
                k--;
            }

            ans = min(ans, cnt);
        }

        cout<< ans <<endl;
    
    }
    return 0;
}
