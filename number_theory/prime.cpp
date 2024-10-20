#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int d = 0;
    for(int i=1; i*i<=n; i++){
    	if(n%i==0){
    		d+=2;
    	}
    	
    	if(n/i==i){
    		d--;
    	}
    }
    if(d==2){
    	cout<<"prime\n";

    }else{
    	cout<<"not prime\n";
    }
}

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
	solve();
}