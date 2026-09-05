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
        if(n ==1 && v[0] !=0){
            cout<< 1 <<endl;
            continue;
        }

        int cnt = 0;
        for(int i=0; i<n; i++){
            if(v[i] == 0){
                cnt++;
            }
        }

        int cnt1 = 0, cnt2 = n-1;
        for(int i=0; i<n; i++){
            while(v[cnt1] == 0){
                cnt1++;
            }
            while(v[cnt2] == 0){
                cnt2--;
            }
        }

        bool flag = false;
        for(int i= cnt1; i<=cnt2; i++){
            if(v[i] == 0){
                flag = true;
                break;
            }
        }

        if(cnt == n){
            cout<< 0 <<endl;
        }
        else if(flag){
            cout<< 2 <<endl;
        }
        else cout<< 1 <<endl;
        
    
    }
    return 0;
}
