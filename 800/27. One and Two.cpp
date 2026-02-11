#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        int countOf2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==2) countOf2++;
        }
        if(countOf2==0) cout<<1<<endl;
        else if(countOf2%2==1) cout<<-1<<endl;
        else
        {
            int count=0;
            for(int i=0;i<n-1;i++)
            {
                if(a[i]==2) count++;
                if(count==countOf2/2)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }   
    return 0;
}
