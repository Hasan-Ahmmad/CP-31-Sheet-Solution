#include<bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        int count=0;
        for(int &i:a)
        {
            cin>>i;
            if(i%2!=0) count++;
        }
        if(count%2 ==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
    FASTIO;
    
    solve();
    
    return 0;
}
