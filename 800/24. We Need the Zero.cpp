#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

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

        int totalXOR=a[0];
        for(int i=1; i<n; i++){
            totalXOR^=a[i];
        }

        if(n%2==1){
            cout<<totalXOR<<endl;
        }
        else{
            if(totalXOR==0){
                cout<<28<<endl;
            }
            else cout<<-1<<endl;
        }
    
    }
    return 0;
}
