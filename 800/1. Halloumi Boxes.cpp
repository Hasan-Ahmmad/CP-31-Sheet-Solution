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
        for(int &i : a)
        {
            cin>>i;
        }
        if(is_sorted(a,a+n) || k>1)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
