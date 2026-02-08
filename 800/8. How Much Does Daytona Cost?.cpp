#include<bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    FASTIO;
    
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        int a[n];
        bool flag= false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==k)
            {
                flag=true;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
