#include<bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    FASTIO;
    
    int t; cin>>t;
    while(t--)
    {
        int n,x; cin>>n>>x;
        int a[n];
        for(int &i : a)
        {
            cin>>i;
        }
        int Max=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>Max) Max=a[i+1]-a[i];
        }
        cout<<max({a[0],Max,(2*(x-a[n-1]))})<<endl;
    }
    
    return 0;
}
