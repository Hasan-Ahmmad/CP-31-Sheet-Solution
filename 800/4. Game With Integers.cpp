#include<bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    FASTIO;
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n%3==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}
