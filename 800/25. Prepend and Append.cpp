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
        string s; cin>>s;
        for(int i=0,j=n-1;i<=j;)
        {
            if(s[i] !=s[j])
            {
                n-=2;
                i++;
                j--;
            }
            else break;
        }
        cout<<n<<endl;
    }
    
    return 0;
}
