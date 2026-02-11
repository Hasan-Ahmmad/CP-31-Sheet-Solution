#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin>>N;
    int ans=INT_MAX;
    for(int i=0;i<N;i++)
    {
        int A; cin>>A;
        A=abs(A);
        if(A<ans) 
        {
            ans=A;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
