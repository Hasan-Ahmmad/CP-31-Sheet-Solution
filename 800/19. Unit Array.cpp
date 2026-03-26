#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        int count1=0, count2=0;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            if(a==1) count1++;
            else count2++;
        }

        int ans=0;
        while(count1<count2){
            count1++;
            count2--;
            ans++;
        }

        if(count2%2==1){
            ans++;
        }

        cout<<ans<<endl;
        
    }
    return 0;
}
