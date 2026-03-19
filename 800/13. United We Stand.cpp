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
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        vector<int> b, c;
        int mx=*max_element(a.begin(),a.end());
        for(int i=0; i<n; i++){
            if(a[i] !=mx){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        if(b.size()==0){
            cout<<-1<<endl;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;

            for(int i : b){
                cout<<i<<" ";
            }
            cout<<endl;
            for(int i : c){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    
    }
    return 0;
}
