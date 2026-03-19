#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;

        map<int, int> mp;

        for(int i=0; i<n; i++){

            int x; cin>>x;
            mp[x]++;
        }

        if(mp.size()==1) cout<<"Yes"<<endl;
        
        else if(mp.size()==2){

            int c1=mp.begin()->second;
            int c2=mp.rbegin()->second;

            if(abs(c1-c2)<=1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    
    }
    return 0;
}
