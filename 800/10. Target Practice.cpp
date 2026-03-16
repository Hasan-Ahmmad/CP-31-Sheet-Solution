#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        char a[10][10];
        int ans=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>a[i][j];
                if(a[i][j]=='X'){
                    ans+=min({i,j,9-i,9-j})+1;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
