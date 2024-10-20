#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5;
int sieve[mx+1];

void createSieve(){
	for(int i=2; i<=mx; i++){
		sieve[i] = 1;
	}
	
	for(int i=2; i<=mx; i++){
		if(sieve[i]==1){
			for(int j = i+i;j<=mx; j=j+i){
				sieve[j] = 0;
			}
		}
	}
}

void solve(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        if(sieve[n]==1){
          cout<<"yes\n";
        }else{
           cout<<"no\n";
        }
    }
	
}

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    createSieve();
	solve();
}