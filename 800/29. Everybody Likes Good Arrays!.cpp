#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int val=a[0];
        int count=0;
        for(int i=1;i<n;i++)
        {
            if((val+a[i])%2==0)
            {
                val*=a[i];
                count++;
            }
            else 
            {
                val=a[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
