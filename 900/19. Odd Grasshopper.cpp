#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin>>t;
	while(t--){
	
		ll n, k;
		cin>>n>>k;

		ll rem;
		if(k%4 == 0){
			rem = 0;
		}
		else if(k%4 == 1){
			rem = -k;
		}
		else if(k%4 == 2){
			rem = 1;
		}
		else{
			rem = k+1;
		}

		if(n%2 == 0){
			cout<< n+rem <<endl;
		}
		else cout<< n-rem <<endl;
	
	}
	return 0;
}
