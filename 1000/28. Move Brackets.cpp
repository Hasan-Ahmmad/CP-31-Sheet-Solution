#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        string s; cin>>s;
        int cnt = 0, ans = 0;

        for(int i=0; i<n; i++){

            if(s[i] == '('){
                cnt++;
            } #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        string s; cin>>s;
        int cnt = 0, ans = 0;

        for(int i=0; i<n; i++){

            if(s[i] == '('){
                cnt++;
            } 
            if(s[i] == ')'){
                cnt--;
            }

            if(cnt<0){
                ans++;
                cnt = 0;
            }
        }


        cout<< ans <<endl;
    
    }
    return 0;
}
            if(s[i] == ')'){
                cnt--;
            }

            if(cnt<0){
                ans++;
                cnt = 0;
            }
        }


        cout<< ans <<endl;
    
    }
    return 0;
}
