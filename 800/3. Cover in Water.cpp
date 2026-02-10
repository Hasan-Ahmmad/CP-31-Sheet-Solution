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
        string s; cin>>s;
        int count =0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.') count++; 
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
            {
                flag=true;
                break;
            }          
        }
        if(flag) cout<<2<<endl;
        else cout<<count<<endl;
    }
    
    return 0;
}
