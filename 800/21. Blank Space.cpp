#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    { 
        int n; cin>>n;
        int a[n];
        vector<int> c;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                count++;
            }
            else
            {
                c.push_back(count);
                count=0;
            }
        }
    c.push_back(count);
    sort(c.begin(),c.end());
    cout<<c.back()<<endl;
    }
}
